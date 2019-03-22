struct S { unsigned short x; } s = {0};
void foo() {
    printf("%d", s.x);
}