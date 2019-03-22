void f(bool * const b);
void foo() { 
    bool x = true;
    bool y = true;
    f(&x);
    if (!x && !y) return;
}
