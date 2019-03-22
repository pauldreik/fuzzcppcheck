int x;
int g() {
    return x*x;
}
void f() {
    x = 2;
    x = g();
}