struct Fred {
    int x, y;
    void foo() const volatile { }
    void foo() volatile { }
    void foo() const { }
    void foo() { }
};