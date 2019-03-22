void f() {
    int x;
    do_something(&((char*)&x)[0], 1);
}