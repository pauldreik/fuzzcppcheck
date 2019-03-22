int g() {
    return x*x;
}
void f(int x) {
    x = 2;
    x = g();
}