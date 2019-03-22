struct S { int i; };
int foo() {
    auto a = new S;
    auto * b = new S;
    auto c = new S[10];
    auto * d = new S[10];
    return a->i + b->i + c[0]->i + d[0]->i;
}