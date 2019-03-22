std::vector<int>& f();
std::vector<int>& g();
void foo() {
    (void)std::find(begin(f()), end(g()), 0);
}
