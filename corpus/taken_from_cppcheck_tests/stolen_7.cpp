struct Foo { int *p; };
void f(struct Foo *foo) {
    int i = foo->p;
}