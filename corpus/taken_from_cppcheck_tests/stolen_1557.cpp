class A {
    double d;
public:
    A() {
        ::rtl::math::setNan(&d);
    }
};