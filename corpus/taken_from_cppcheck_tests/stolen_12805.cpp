class Base {
    virtual void foo() {}
};
class Deri1 : Base {
    void foo(int i) {}
};
class Deri2 : Deri1 {
    void foo() {}
};