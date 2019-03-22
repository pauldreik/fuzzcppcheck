class C { void operator=(int x); };
void f() {
    C c;
    c = x;
    c = x;
}