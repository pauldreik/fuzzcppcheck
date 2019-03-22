namespace NS {
    class MyClass {
        ~MyClass();
    };
}
using namespace NS;
MyClass::~MyClass() {
    delete Example;
}