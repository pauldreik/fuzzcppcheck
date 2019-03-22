struct Stringy {
    std::string inner;
};
struct Foo {
    Stringy s;
};
int main() {
    Foo foo;
    memset(&foo, 0, sizeof(Foo));
}