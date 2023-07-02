set(APP ${PROJECT_NAME}-app)
set(LIB ${PROJECT_NAME})

find_package(Boost 1.74.0 REQUIRED COMPONENTS
	program_options)

add_subdirectory(handlers)

add_executable(${APP}
		main.cpp
)

target_link_libraries(${APP}
		${LIB}
)

add_library(${LIB} SHARED
        Filesystem.hpp
        Filesystem.cpp
        Format.hpp
		Format.cpp
        Option.hpp
        ProgramOptions.hpp
        ProgramOptions.cpp
)

target_link_libraries(${LIB}
		Boost::program_options
        handlers
)
