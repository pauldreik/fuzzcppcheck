struct S
{
    typedef void (*FP)();
    virtual FP getFP();
    virtual void execute();
};
void f() {
  int a[9];
}
