std::vector<int>::iterator g();
void f(std::vector<int> v) {
    std::for_each(g(), g(), [](int){});
}
