namespace NS {
    class MyClass {
        MyClass();
        ~MyClass();
    };
}
using namespace NS;
MyClass::~MyClass() { }
MyClass::MyClass() { }
