struct A { int b; };
void foo(A* a1, A* a2) {
    a1->b = a1->b;
}