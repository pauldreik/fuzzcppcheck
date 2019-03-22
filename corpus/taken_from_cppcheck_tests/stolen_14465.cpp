int a(int x) { return x + x; }void b() {
    int *p;
    a(*p);
}