unsigned bar(std::string);
class Foo {
public:
    int a_, b_;
    Foo(int a, int b) : a_(a), b_(b) {}
    Foo(int a, const std::string& b) : Foo(a, bar(b)) {}
};