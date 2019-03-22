class Fred { int x; void clear(); void f(); };
void Fred::f() {
    int a = x;
    clear();
    if (x == 234) {}
}