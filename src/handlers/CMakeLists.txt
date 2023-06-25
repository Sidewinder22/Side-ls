set(LIB handlers)

add_library(${LIB}
    STATIC
    CleanHandler.hpp
    CleanHandler.cpp
    Handler.hpp
    HandlerFactory.hpp
    HandlerFactory.cpp
    LongListingHandler.hpp
    LongListingHandler.cpp
)

target_include_directories(${LIB}
    # For the public header files
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
