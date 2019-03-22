class A {
    void foo();
    bool b[7];
};

void A::foo() {
    for (int i=0; i<7; i++) {
        b[i] = b[i+1];
    }
}