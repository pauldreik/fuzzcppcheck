char str[100];

void foo(char *a) {
    strncpy(str, a, 100);
}

void bar(char *p) {
    strncpy(p, str, 100);
}
