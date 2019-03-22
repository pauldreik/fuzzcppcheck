void f() {
    std::vector<int> ints;
    std::vector<int>::iterator it = ints.begin();
    if (it == ints.begin()) {
        ints.push_back(0);
    } else {
        ints.insert(it,0);
    }
}