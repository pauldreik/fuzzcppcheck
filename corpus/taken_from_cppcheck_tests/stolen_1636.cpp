struct A {
    int a;
    A() { a=0; }
    A(A const &a) { operator=(a); }
    A & operator = (const A & rhs) {
        return *this;
    }
};