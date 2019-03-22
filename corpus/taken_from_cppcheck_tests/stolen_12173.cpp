std::vector<int>& f();
std::vector<int>& g();
void foo() {
    auto size = f().end() - g().begin();
}
