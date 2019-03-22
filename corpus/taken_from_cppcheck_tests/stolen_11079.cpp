namespace MyNamespace {
class TestClass {
public:
    TestClass() {
        SomeFunction();
        TemplatedMethod< int >( 0 );
    }
    void SomeFunction() { }
private:
    template< typename T > T TemplatedMethod(T);
};
template< typename T > T TestClass::TemplatedMethod(T t) { return t; }
}