std::vector<int>& g();
void f() {
    std::for_each(g().end(), g().end(), [](int){});
}
