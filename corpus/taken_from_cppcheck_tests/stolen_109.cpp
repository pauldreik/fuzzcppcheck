void foo(char* p) {
    if (!p) p = buf;
    do_something(p);
}