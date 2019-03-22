struct foo;
void f() {
    auto fn = []() -> foo* { return new foo(); };
}
