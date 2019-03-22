void f(const char *format, ...) {
    va_args args;
    va_start(args, format);
}
void test() {
    CHAR buffer[1024];
    f("%s", buffer);
}