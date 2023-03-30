# Replace 'component_name' with the actual component name
cmake_minimum_required(VERSION 3.10)

# Create the test executable
add_executable(component_name_test component_name_test.cpp)

# Link the test executable with the component library, Google Test, and Google Mock
target_link_libraries(component_name_test
    PRIVATE
    component_name  # Replace 'component_name' with the actual component name
    gtest
    gtest_main
    gmock
    )

# Add the test to the CTest test runner
add_test(NAME component_name_test COMMAND component_name_test)