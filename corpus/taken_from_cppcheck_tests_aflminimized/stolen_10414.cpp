void __attribute__((const)) GetValue() { return X; }
void foo() {
    if ((GetValue() == 0) || (GetValue() == 0)) { dostuff(); }
}