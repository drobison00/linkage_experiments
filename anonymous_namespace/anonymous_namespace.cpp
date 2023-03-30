#include "anonymous_namespace.h"
#include <iostream>

namespace {
    void anonymous_namespace_function_impl() {
        std::cout << "This is a function with internal linkage using an anonymous namespace." << std::endl;
    }
}

void anonymous_namespace_function() {
    anonymous_namespace_function_impl();
}