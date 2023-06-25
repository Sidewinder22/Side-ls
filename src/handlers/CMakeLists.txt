set(LIB handlers)

add_library(${LIB}
    STATIC
    CleanCommand.hpp
    CleanCommand.cpp
    Command.hpp
    CommandFactory.hpp
    CommandFactory.cpp
    LongListingCommand.hpp
    LongListingCommand.cpp
)

target_include_directories(${LIB}
    # For the public header files
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
