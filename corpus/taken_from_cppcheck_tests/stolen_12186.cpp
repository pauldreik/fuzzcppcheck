std::vector<int>& g();
void f() {
    std::for_each(g().begin(), g().begin(), [](int){});
}
