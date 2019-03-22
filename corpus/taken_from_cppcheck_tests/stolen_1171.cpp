class foo {
    void DoSomething(int &a) const { a = 1; }
    void DoSomethingElse() { DoSomething(bar); }
private:
    int bar;
};