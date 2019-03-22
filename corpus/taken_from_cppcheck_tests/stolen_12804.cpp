class Base {
    virtual void foo() {}
};
class Deri : Base {
    void foo(std::string& s) {}
};