struct A { int x; int y; };void use(int);
void test(A a) {
    int i = a.x;
    int j = a.x;
    use(i);
    i = j;
}