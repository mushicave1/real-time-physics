project('glad', 'c')

glad_inc = include_directories('include')
glad_src = files('src/gl.c')

glad_lib = static_library('glad', glad_src,
  include_directories: glad_inc
)

glad_dep = declare_dependency(
  include_directories: glad_inc,
  link_with: glad_lib
)
