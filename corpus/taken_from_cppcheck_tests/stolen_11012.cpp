class Foo {
public:
    template<typename T> void foo() { bar<T>(); }
private:
    template<typename T> void bar() { bazz(); }
    void bazz() { }
};
void some_func() {
    Foo x;
    x.foo<int>();
}