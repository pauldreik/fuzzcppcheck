void foo() {
    std::vector<int> c;
    for(int x:v)
        c.push_front(f(x));
}
