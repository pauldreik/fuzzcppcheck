struct A {
    std::vector<int>& f();
    std::vector<int>& g();
};
void foo() {
    (void)std::find(A{} .f().begin(), A{} .g().end(), 0);
}
