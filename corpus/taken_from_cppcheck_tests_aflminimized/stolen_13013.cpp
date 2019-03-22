struct Foo { int a; int b[10]; };
class Bar {
    Foo foo1;
    Foo foo2[10];
public:
    const Foo & getFoo1() { return foo1; }
    const Foo * getFoo2() { return foo2; }
};
int main() {
    Bar bar;
    auto v1 = bar.getFoo1().a;
    auto v2 = bar.getFoo1().b[0];
    auto v3 = bar.getFoo1().b;
    const auto v4 = bar.getFoo1().b;
    const auto * v5 = bar.getFoo1().b;
    auto v6 = bar.getFoo2()[0].a;
    auto v7 = bar.getFoo2()[0].b[0];
    auto v8 = bar.getFoo2()[0].b;
    const auto v9 = bar.getFoo2()[0].b;
    const auto * v10 = bar.getFoo2()[0].b;
    auto v11 = v1 + v2 + v3[0] + v4[0] + v5[0] + v6 + v7 + v8[0] + v9[0] + v10[0];
    return v11;
}