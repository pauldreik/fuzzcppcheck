class Foo {
public:
    ~Foo() { delete oArq; }
    Foo(): oArq(new std::ofstream("...")) {}
    void MyMethod();
private:
    std::ofstream *oArq;
};
void Foo::MyMethod()
{
    (*oArq) << "</table>";
}