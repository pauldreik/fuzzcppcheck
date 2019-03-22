int f(int) __attribute__((pure));
int g(int) __attribute__((pure));
void test() {
    const int x = 0;
    int i = f(0);
    int j = f(x);
}