struct C { std::string s; };
void foo(C*& p) {
    p = malloc(sizeof(C));
}