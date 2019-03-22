void Format(va_list v1) {
    va_list v2;
    va_copy(v2, v1);
    foo(va_arg(v1, float));
    va_end(v2);
}