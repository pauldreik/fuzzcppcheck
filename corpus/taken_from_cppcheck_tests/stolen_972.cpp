class Fred {
    std::string b;
    void f();
};
void Fred::f() {
    memset(this, 0, sizeof(*this));
}