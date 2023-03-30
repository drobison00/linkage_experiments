add_library(extern_lib STATIC extern_explicit_templates.cpp)

# Export the include directory
target_include_directories(extern_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})