import com.github.jengelman.gradle.plugins.shadow.tasks.ShadowJar

plugins {
    java
    application
    antlr
    id("com.github.johnrengelman.shadow").version("7.1.2")
}


repositories {
    mavenCentral()
}

val antlrVersion = "4.9.3"



dependencies {
    // Used for parser
    antlr("org.antlr:antlr4:$antlrVersion")

}

application {
    mainClass.set("net.techcable.c_syntax_validator.Main")
}

java {
    toolchain {
        languageVersion.set(JavaLanguageVersion.of(8))
    }
}

tasks.generateGrammarSource {

    arguments.addAll(listOf("-package", "net.techcable.c_syntax_validator.parser"))
}

tasks.named<ShadowJar>("shadowJar") {
    dependencies {
        // TODO: Not elegant
        val forbiddenGroups = listOf(
            "antlr",
            "org.abego.treelayout",
            "glassfish",
            "icu"
        )
        exclude { dep -> forbiddenGroups.any { it in dep.moduleGroup } && dep.moduleName != "antlr4-runtime" }
    }
}
