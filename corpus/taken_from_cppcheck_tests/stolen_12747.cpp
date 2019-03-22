class Class {
    class NestedClass {
    public:
        virtual void f();
    };
    friend void NestedClass::f();
}