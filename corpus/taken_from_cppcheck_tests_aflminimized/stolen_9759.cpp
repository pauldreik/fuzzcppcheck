void f() {
    int * a=0;
    if (!a) {};
    int c = a ? b : b+1;
}
