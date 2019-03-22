class A {
public:
    A & operator=(const A &a) {
        rand();
        throw std::exception();
    }
};