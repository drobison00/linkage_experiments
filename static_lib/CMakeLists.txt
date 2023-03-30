add_library(static_lib STATIC static_lib.cpp)

target_link_libraries(static_lib
    PUBLIC
    extern_lib
    )

# Export the include directory
target_include_directories(static_lib PUBLIC
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR})