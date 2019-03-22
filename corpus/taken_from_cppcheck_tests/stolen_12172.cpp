std::vector<int>& f();
std::vector<int>& g();
void foo() {
    if(f().begin() == g().end()) {}
}
