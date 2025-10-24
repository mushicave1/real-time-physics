project('real-time-physics', 'c')

cc = meson.get_compiler('c')

if host_machine.system() == 'darwin'
    deps = [
        dependency('OpenGL', method: 'extraframework', required: true),
        dependency('Cocoa', method: 'extraframework', required: true),
        dependency('Quartz', method: 'extraframework', required: true),
        dependency('IOKit', method: 'extraframework', required: true)
    ]
endif

glad_proj = subproject('glad')

deps += dependency('glfw3', required: true, method: 'pkg-config')
deps += glad_proj.get_variable('glad_dep')

inc = include_directories('include')

executable('real-time-physics', ['src/main.c', 'src/math.c'], dependencies: deps, include_directories: inc)