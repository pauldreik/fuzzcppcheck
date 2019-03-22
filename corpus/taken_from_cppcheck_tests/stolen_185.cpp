class Foo;
Foo & hello(bool) {
     static Foo foo;
     return foo;
}
Foo hello() {
     return Foo();
}

Foo& f() {
    return hello(true);
}