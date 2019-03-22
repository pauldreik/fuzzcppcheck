int main(int argc, char *argv[]) {
    long(^addthem)(const char *, ...) = ^long(const char *format, ...) {
        va_list argp;
        va_start(argp, format);
        c = va_arg(argp, int);
    };
}