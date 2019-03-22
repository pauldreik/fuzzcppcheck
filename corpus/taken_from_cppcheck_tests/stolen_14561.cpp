struct ABC { int a; };
void clear(struct ABC &abc);
int f() {
    struct ABC abc;
    clear(abc);
    return abc.a;
}