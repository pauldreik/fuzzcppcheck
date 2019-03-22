class iterator { int foo(); };
int foo() {
    iterator i;
    return i.foo();;
}