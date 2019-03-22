std::vector<int>& f();
std::vector<int>& g();
void foo() {
    (void)std::find(f().begin(), g().end(), 0);
}
