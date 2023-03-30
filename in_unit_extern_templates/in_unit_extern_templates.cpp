#include "in_unit_extern_templates.h"
#include <iostream>

// Definition of the external variable
int global_variable = 42;

// Definition of the external function
void in_unit_extern_template_function() {
    std::cout << "This is a function using an 'extern' variable. global_variable = " << global_variable << std::endl;
}

// Definition of another external function
extern "C" void in_unit_extern_function() {
    std::cout << "This is another 'extern' function." << std::endl;
}

// Definition of an external class
void InUnitExternTemplateClass::print_hello() {
    std::cout << "Hello from the ExternClass!" << std::endl;
}