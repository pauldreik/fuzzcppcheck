int (*a1)[10];
void f1() {
    int(*a2)[10];
    int(&a3)[10];
}
struct A {
    int(&a4)[10];
    int f2(int i) { return a4[i]; }
    int f3(int(&a5)[10], int i) { return a5[i]; }
};
int f4(int(&a6)[10], int i) { return a6[i]; }