void Format(char* szFormat, char (*szBuffer)[_Size], ...) {
    va_list arg_ptr;
    va_start(arg_ptr, szBuffer);
    try {
        throw sth;
    } catch(...) {
        va_end(arg_ptr);
    }
}