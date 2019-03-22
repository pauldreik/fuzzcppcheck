struct A { unsigned int size; };
struct B { struct A *a; };
void f(struct B *b) {
    unsigned int j;
    for (j = 0; j < b[0].a->size; ++j) {
    }
}
