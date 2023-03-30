#include "shared_lib.h"
#include "extern_lib/extern_explicit_templates.h"

#include <iostream>

// Existing shared_function definition
void shared_function() {
    std::cout << "This is a shared function from shared_lib." << std::endl;
}

void shared_extern_explicit_template_function() {
    // This instance type is not designated as 'extern' in the header file, it should be instantiated here
    ExternTemplateClass<float> static_extern_float_instance(3.14);
    static_extern_float_instance.print_value();

    // Each of these instances is designated as 'extern' in the header file, they should only be resolved if
    // we link to the extern_lib library
    // Note: this will work if we link to static_lib, because it also links to extern_lib
    ExternTemplateClass<int> static_extern_int_instance(600);
    static_extern_int_instance.print_value();

    ExternTemplateClass<double> static_extern_double_instance(13.14);
    static_extern_double_instance.print_value();

    ExternTemplateClass<std::string> static_extern_string_instance("Static extern");
    static_extern_string_instance.print_value();
}

template<typename T>
void shared_template_function(const T &value) {
    std::cout << "Shared template function value: " << value << std::endl;
}

template<typename T>
void SharedTemplateClass<T>::print_value() {
    std::cout << "Value in SharedTemplateClass: " << value_ << std::endl;
}

// Explicitly instantiate the template function and class for some types
template void shared_template_function<int>(const int &value);
template void shared_template_function<double>(const double &value);

template class SharedTemplateClass<int>;
template class SharedTemplateClass<double>;

template class SharedTemplateHeaderClass<int>;
template class SharedTemplateHeaderClass<double>;
template class SharedTemplateHeaderClass<std::string>;