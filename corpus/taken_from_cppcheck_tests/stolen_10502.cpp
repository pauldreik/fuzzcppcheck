int f() __attribute__((pure));
int g() __attribute__((pure));
void test() {
    int i = f();
    int j = f();
}