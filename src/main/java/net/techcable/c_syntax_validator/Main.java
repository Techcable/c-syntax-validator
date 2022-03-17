/*
 * This Java source file was generated by the Gradle 'init' task.
 */
package net.techcable.c_syntax_validator;

import net.techcable.c_syntax_validator.parser.CLexer;
import net.techcable.c_syntax_validator.parser.CParser;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.*;
import java.util.stream.Collectors;


public class Main {
    private final Reader reader;
    private final EnumSet<Flag> flags;

    public Main(Reader reader, EnumSet<Flag> flags) {
        this.reader = reader;
        this.flags = Objects.requireNonNull(flags);
    }

    private static final int TOTAL_DESC_PADDING = 32;
    private static final String USAGE =  "USAGE: java -jar c-syntax-validator.jar [flags] <fileName>";
    private static final String HELP = String.join(
            "\n",
            "A parser/validator for C syntax",
            "",
            USAGE,
            "",
            "OPTIONS:",
            Arrays.stream(Flag.values())
                    .map(Flag::help)
                    .collect(Collectors.joining("\n"))
    );

    public static void main(String[] args) {
        int idx = 0;
        EnumSet<Flag> flags = EnumSet.noneOf(Flag.class);
        String arg;
        while (idx < args.length && (arg = args[idx]).startsWith("-")) {
            Flag parsed = Flag.parse(arg);
            if (parsed == null) {
                throw fatal("Unknown arg: " + arg);
            } else if (parsed == Flag.HELP) {
                System.out.println(HELP);
                return;
            }
            flags.add(parsed);
            idx += 1;
        }
        assert !flags.contains(Flag.HELP);
        final Reader reader;
        if (flags.contains(Flag.STDIN)) {
            reader = new InputStreamReader(System.in, StandardCharsets.UTF_8);
        } else {
            if (idx >= args.length) {
                throw fatal("Insufficient args: Must specify fileName");
            }
            String fileName = args[idx++];
            try {
                reader = Files.newBufferedReader(new File(fileName).toPath());
            } catch (FileNotFoundException e) {
                throw fatal("Unable to find file: " + fileName);
            } catch (IOException e) {
                throw fatal("Unable to open file: " + fileName);
            }
        }
        if (idx < args.length) {
            throw fatal("Too many arguments: Expected only " + (idx + 1));
        }
        try {
            new Main(reader, flags).run();
        } catch (IOException e) {
            throw fatal("Unable to read input");
        }
    }

    public void run() throws IOException {
        CLexer lexer = new CLexer(CharStreams.fromReader(this.reader));
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        CParser parser = new CParser(tokens);
        parser.compilationUnit();
    }

    private static AssertionError fatal(String msg) {
        System.err.println(msg);
        System.err.println();
        System.err.println(USAGE);
        System.err.println("See --help for more details");
        System.exit(1);
        throw new AssertionError();
    }

    public enum Flag {
        HELP('h', "help", "Print this help message"),
        STDIN(null, "stdin", "Read from stdin (allows omitting fileName)");

        private final Character shortDesc;
        private final String longDesc;
        private final String help;

        Flag(Character shortDesc, String longDesc, String help) {
            this.shortDesc = shortDesc;
            this.longDesc = Objects.requireNonNull(longDesc);
            this.help = Objects.requireNonNull(help);
            if (longDesc.startsWith("-")) throw new IllegalArgumentException();
        }

        private static Flag parse(String name) {
            String targetLong = null;
            Character targetShort = null;
            if (name.startsWith("--")) {
                targetLong = name.substring(2);
            } else if (name.startsWith("-") && name.length() == 2){
                targetShort = name.charAt(1);
            }
            for (Flag f : Flag.values()) {
                if (f.longDesc.equals(targetLong)) {
                    return f;
                } else if (Objects.equals(targetShort, f.shortDesc)) {
                    return f;
                }
            }
            return null;
        }

        private static void appendRepeated(StringBuilder target, char c, int amount) {
            for (int i = 0; i < amount; i++) {
                target.append(c);
            }
        }
        public String help() {
            StringBuilder res = new StringBuilder();
            appendRepeated(res, ' ', 4);
            if (shortDesc != null) {
                res.append('-');
                res.append(shortDesc);
                res.append(", ");
            } else {
                // Sufficent padding to align longDesc
                appendRepeated(res, ' ', 4);
            }
            res.append("--");
            res.append(longDesc);
            while (res.length() < TOTAL_DESC_PADDING) res.append(' ');
            res.append(help);
            return res.toString();
        }
    }
}
