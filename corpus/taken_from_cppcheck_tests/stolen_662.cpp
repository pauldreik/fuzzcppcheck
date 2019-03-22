class A : public B {
    char val[2];
    void f(int i, int ii);
};
void A::f(int i, int ii)
{
    strcpy(val, "ab") ;
}