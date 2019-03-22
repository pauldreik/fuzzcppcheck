class A: public B, public C::D, public E<F>::G<H> {
    int i;
    A(int i): B{i}, C::D{i}, E<F>::G<H>{i} ,i{i} {
        int j{i};
    }
};