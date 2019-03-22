int f() __attribute__((pure));
int g() __attribute__((pure));
void test() {
    int x = f();
    int i = x + 1;
    int j = f() + 1;
}