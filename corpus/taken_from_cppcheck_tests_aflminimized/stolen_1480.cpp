struct F{};
struct Foo {
    Foo(int a, F&& f, int b = 21) : _a(a), _b(b), _f(f) {}
    Foo(int x, const char* value) : Foo(x, F(), 42) {}
    Foo(int x, int* value) : Foo(x, F()) {}
    int _a;
    int _b;
    F _f;
};