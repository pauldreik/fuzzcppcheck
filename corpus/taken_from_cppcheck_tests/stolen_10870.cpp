void g(int);
void h() { return 1; }
void f(int x) {
    g(h());
}
