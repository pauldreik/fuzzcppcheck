int f(int) __attribute__((pure));
int g(int) __attribute__((pure));
void test() {
    int i = f(0);
    int j = f(0);
}