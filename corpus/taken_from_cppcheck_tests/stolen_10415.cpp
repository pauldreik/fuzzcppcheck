void GetValue() __attribute__((const));
void GetValue() { return X; }
void foo() {
    if ((GetValue() == 0) || (GetValue() == 0)) { dostuff(); }
}