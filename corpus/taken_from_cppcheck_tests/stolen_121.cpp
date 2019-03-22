struct A {
    char data[10];
};
void foo(char** p) {
    struct A a = bar();
    *p = &a.data[0];
}