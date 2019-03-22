struct S {
    char a[5];
};
void f() {
    S s;
    mymemset(s.a, 0, 10);
}