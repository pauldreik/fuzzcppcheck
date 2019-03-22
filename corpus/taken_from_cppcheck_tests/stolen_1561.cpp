void bar();
class MyClass {
public:
    MyClass();
    void Restart();
protected:
    int m_retCode;
};
MyClass::MyClass() {
    bar(),Restart();
}
void MyClass::Restart() {
    m_retCode = 0;
}
