void redisvFormatCommand(char *format, va_list ap, bool flag) {
    va_list _cpy;
    va_copy(_cpy, ap);
    if (flag)
        goto fmt_valid;
    va_end(_cpy);
    goto format_err;
fmt_valid:
    sdscatvprintf(curarg, _format, _cpy);
    va_end(_cpy);
format_err:
}