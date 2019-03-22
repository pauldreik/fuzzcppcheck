class Foo;
Foo hello() {
     return Foo();
}

Foo& f() {
    return hello();
}