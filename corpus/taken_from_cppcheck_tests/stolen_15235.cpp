void assertf_fail(const char *assertion, const char *file, int line, const char *func, const char* msg, ...) {
    struct A {
        A(char* buf, int size) {}
            void printf(const char * format, ...) {
                va_list args;
                va_start(args, format);
                va_end(args);
        }
    };
}