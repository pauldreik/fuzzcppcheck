std::map<int, string> foo() {
     return something;
}
std::map<int, string>& bar() {
    return foo();
}