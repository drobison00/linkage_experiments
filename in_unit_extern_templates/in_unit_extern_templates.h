#pragma once

// Declaration of an external variable
extern int global_variable;

// Declaration of an external function
void in_unit_extern_template_function();

// Declaration of another external function
extern "C" void in_unit_extern_function();

// Declaration of an external class
class InUnitExternTemplateClass {
public:
    void print_hello();
};