char *nasm_skip_spaces(const char *p) {
    if (p)
        while (*p && nasm_isspace(*p))
            p++;
    return p;
}