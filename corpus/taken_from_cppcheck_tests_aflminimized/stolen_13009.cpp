enum E : unsigned short { A, B, C };
int foo() {
    auto a = new E;
    auto * b = new E;
    auto c = new E[10];
    auto * d = new E[10];
    return *a + *b + c[0] + d[0];
}