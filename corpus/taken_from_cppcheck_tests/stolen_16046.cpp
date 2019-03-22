class A: public B, public C::D {
    int i;
    A(int i): B(i), C::D(i), i(i) {
        int j(i);
    }
};