struct A;
void f() {
    using T = A[3];
    A &&a = T{1, 2, 3}[1]();
}
