std::vector<int>& f();
std::vector<int>& g();
void foo() {
    if(f().begin() == f().end()) {}
    if(f().begin() == f().end()+1) {}
    if(f().begin()+1 == f().end()) {}
    if(f().begin()+1 == f().end()+1) {}
}
