struct A {
    FILE* f;
    ~A();
};
void func() {
    struct A a;
    a.f = fopen("test", "r");
}