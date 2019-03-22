void f() {
    char str[3];
    foo.mymemset(str, 0, 100);
    foo::mymemset(str, 0, 100);
    std::mymemset(str, 0, 100);
}