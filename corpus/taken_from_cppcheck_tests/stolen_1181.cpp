struct Bar {
    void run() const { }
};
struct Foo {
    Bar b;
    void foo(Foo f) {
        b.run();
    }
};