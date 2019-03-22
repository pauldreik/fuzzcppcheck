class A {
public:
    A & operator=(const A &a) {
        rand();
        abort();
    }
};