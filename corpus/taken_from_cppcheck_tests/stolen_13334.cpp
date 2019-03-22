void foo(char *str)
{
    int i;
    for (i=0;i<10;++i) {
        if (*str == 0) goto label;
    }
    return;
label:
    str[i] = 0;
}
