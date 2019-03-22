void f() {
    Foo& bar = foo();
    bar = y();
    foo();
    bar = y();
}