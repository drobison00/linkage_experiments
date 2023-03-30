# Extern Lib

This component is a library that contains explicit template instantiations for the `ExternTemplateClass`. The
`shared_lib` and `static_lib` components link against these instances by including `extern_explicit_headers.h`. This
means that `shared_lib` and `static_lib` should not have to recompile the template class, and should not have symbol
references to the template class.
