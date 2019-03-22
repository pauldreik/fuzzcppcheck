class foo {
    int a;
public:
    void set(int i) { a = i; }
    void set(const foo & f) { *this = f; }
};
void bar() {}