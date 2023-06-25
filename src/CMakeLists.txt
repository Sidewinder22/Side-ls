set(APP side-ls)

find_package(Boost 1.74.0 REQUIRED COMPONENTS
	program_options)

add_subdirectory(handlers)

add_executable(${APP} 
#        CleanCommand.hpp
#        CleanCommand.cpp
#        Command.hpp
#        CommandFactory.hpp
#        CommandFactory.cpp
        Filesystem.hpp
        Filesystem.cpp
        Format.hpp
	Format.cpp
#        LongListingCommand.hpp
#        LongListingCommand.cpp
        main.cpp
        Options.hpp
        ProgramOptions.hpp
        ProgramOptions.cpp
)

target_link_libraries(${APP}
	Boost::program_options
        handlers
)
