typedef char Str[10];class A {
public:
    void f(Str &cl);
    void g(Str cl);
}
void Fred::f(Str &cl) {
    sizeof(cl);
}