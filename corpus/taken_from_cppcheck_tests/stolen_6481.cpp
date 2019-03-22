class Foo {
    double d;
    struct Bar {
        int i;
    } bar[2];
    struct Baz {
        int i;
    } baz;
};
int a[10];
Foo f[10];
void foo(const Foo* foo) {
    printf("%d %f %f %d %f %f",
        foo->d, foo->bar[0].i, a[0],
        f[0].d, f[0].baz.i, f[0].bar[0].i);
}