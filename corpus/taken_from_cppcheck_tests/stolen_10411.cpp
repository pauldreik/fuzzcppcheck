class D { void strcmp(); };
void foo() {
    D d;
    if (d.strcmp() && d.strcmp()) {}
}