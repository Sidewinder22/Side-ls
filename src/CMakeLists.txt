set(APP side-ls)

find_package(Boost 1.74.0 REQUIRED COMPONENTS
	program_options)

add_executable(${APP} 
        Filesystem.hpp
        Filesystem.cpp
        Format.hpp
	Format.cpp
        Options.hpp
        ProgramOptions.hpp
        ProgramOptions.cpp
	main.cpp
)

target_link_libraries(${APP}
	Boost::program_options
)
