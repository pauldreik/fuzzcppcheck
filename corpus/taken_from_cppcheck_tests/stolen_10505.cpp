int f() __attribute__((pure));
int g() __attribute__((pure));
void test() {
    int i = 1 + f();
    int j = 1 + f();
}