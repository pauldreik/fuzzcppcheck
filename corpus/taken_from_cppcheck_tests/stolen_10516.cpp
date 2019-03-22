int f();
int g();
void test() {
    int i = f() || f();
    int j = f() && f();
}