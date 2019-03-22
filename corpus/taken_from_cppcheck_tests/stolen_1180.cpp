struct Bar {
    int i = 0;
    void run() { i++; }
};
struct Foo {
    Bar b;
    void foo(Foo f) {
        b.run();
    }
};