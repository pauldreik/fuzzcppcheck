class Foo {
public:
    Foo() : _x(0), _y(0) {}
    Foo(const Foo& f) {
        copy(&f);
    }
    void copy(const Foo* f) {
        _x=f->_x;
        copy(*f);
    }
private:
    void copy(const Foo& f) {
        _y=f._y;
    }
    int _x;
    int _y;
};