void f(const char* fp) {
    do
        ;
    while (f(++fp, (*fp) <= 7));
}
