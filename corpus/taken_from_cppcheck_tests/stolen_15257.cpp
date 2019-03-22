void Format(char* szFormat, char (*szBuffer)[_Size], ...) {
    va_list vl1;
    va_start(vl1, szBuffer);
    va_copy(vl1, vl1);
    va_end(vl1);
}