project('c-syntax-validator', 'cpp')

sources = ['main.cpp']

subdir('parser')

include_dirs = [include_directories('parser')]

antlr = dependency(
  'antlr4', 'version': '>=4.9',
  fallback: ['antlr4', 'antlr_dep'],
  static: true,
  required: true
)

executable('c-syntax-validator', sources : sources, include_directories: include_dirs)
