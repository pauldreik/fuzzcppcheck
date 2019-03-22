int f() __attribute__((pure));
int g() __attribute__((pure));
void test() {
    int i = f() + 1;
    int j = 1 + f();
}