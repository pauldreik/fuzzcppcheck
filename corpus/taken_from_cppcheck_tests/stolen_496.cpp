union { char a[1]; int b; } ab;
void f() {
    ab.a[2] = 0;
}