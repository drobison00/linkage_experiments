#include "static_lib.h"
#include <iostream>

// Existing static_function definition
void static_function() {
    std::cout << "This is a static function from static_lib." << std::endl;
}

void static_extern_explicit_template_function() {
    // This instance type is not designated as 'extern' in the header file, it should be instantiated here
    ExternTemplateClass<float> static_extern_float_instance(3.14);
    static_extern_float_instance.print_value();

    // Each of these instances is designated as 'extern' in the header file, they should only be resolved if
    // we link to the extern_lib library.
    // Note: this will work if we link to shared_lib, because it also links to extern_lib
    ExternTemplateClass<int> static_extern_int_instance(600);
    static_extern_int_instance.print_value();

    ExternTemplateClass<double> static_extern_double_instance(13.14);
    static_extern_double_instance.print_value();

    ExternTemplateClass<std::string> static_extern_string_instance("Static extern");
    static_extern_string_instance.print_value();
}

template<typename T>
void static_template_function(const T &value) {
    std::cout << "Static template function value: " << value << std::endl;
}

template<typename T>
void StaticTemplateClass<T>::print_value() {
    std::cout << "Value in StaticTemplateClass: " << value_ << std::endl;
}

// Explicitly instantiate the template function and class for some types
template void static_template_function<int>(const int &value);
template void static_template_function<double>(const double &value);

template class StaticTemplateClass<int>;
template class StaticTemplateClass<double>;

// Explicitly instantiate the template class for some types
template class StaticTemplateHeaderClass<int>;
template class StaticTemplateHeaderClass<double>;
template class StaticTemplateHeaderClass<std::string>;