set(APP side-ls)

find_package(Boost 1.74.0 REQUIRED COMPONENTS
	program_options)

add_executable(${APP} 
	Filesystem.cpp
	Format.cpp
	ProgramOptions.cpp
	main.cpp
)

target_link_libraries(${APP}
	Boost::program_options
)
