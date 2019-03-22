void f(std::set<int> &ints) {
    for (std::set<int>::iterator it = ints.begin(); it != ints.end(); ++it) {
        for (std::set<int>::iterator it = ints2.begin(); it != ints2.end(); ++it)
        { }
    }
}