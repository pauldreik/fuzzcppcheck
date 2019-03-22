void Format(char* szFormat, char (*szBuffer)[_Size], ...) {
    va_list arg_ptr;
    va_start(arg_ptr, szBuffer);
    va_end(arg_ptr);
    va_start(arg_ptr, szBuffer);
    foo(va_arg(arg_ptr, float));
    va_end(arg_ptr);
}