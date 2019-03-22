namespace NS {
    class MyClass {
    public:
        MyClass();
        ~MyClass();
    private:
        bool SomeVar;
    };
}
using namespace NS;
MyClass::~MyClass() { }
MyClass::MyClass() : SomeVar(false) { }
