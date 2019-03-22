void func(char *buffer, const char *format, int precision, unsigned value) {
    (precision < 0) ? sprintf(buffer, format, value) : sprintf(buffer, format, precision, value);
}