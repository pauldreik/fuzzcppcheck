void Format(char* szFormat, char* szBuffer, size_t nSize, ...) {
    va_list arg_ptr;
    va_start(arg_ptr, szBuffer);
    va_end(arg_ptr);
}