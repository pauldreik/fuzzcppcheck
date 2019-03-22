template <class T> void foo() { }
void bar() {
    std::cout << (foo<double>());
}