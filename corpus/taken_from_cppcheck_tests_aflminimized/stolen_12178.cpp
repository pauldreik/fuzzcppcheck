std::vector<int>& f();
std::vector<int>& g();
void foo() {
    if(bar(f().begin()) == g().end()) {}
}
