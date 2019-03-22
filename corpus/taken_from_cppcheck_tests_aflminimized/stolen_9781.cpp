void f() {
    int *p;
    ((p=ret()) && (x=*p));
    if (p);
}