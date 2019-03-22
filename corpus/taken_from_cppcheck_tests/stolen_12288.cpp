class iterator {
    Class operator*();
    iterator& operator++();
    int foo();
};
int foo() {
    iterator i;
    return i.foo();;
}