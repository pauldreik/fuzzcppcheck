void f() {
    std::forward_list<int>::iterator it;
    for (it = ab.begin(); ab.end() > it; ++it) {}
}