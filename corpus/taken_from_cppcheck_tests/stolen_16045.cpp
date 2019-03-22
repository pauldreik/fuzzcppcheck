struct A;
typedef bool (A::* FuncPtr)();
struct A {
    FuncPtr pFun;
    void setPFun(int mode);
    bool funcNorm();
};
void A::setPFun(int mode) {
    pFun = &A::funcNorm;
}