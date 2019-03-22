void f(std::set<int> &ints) {
    for (std::set<int>::iterator it = ints.begin(); it != ints.end(); ++it) {
        if (a) {
            it++;
        }
    }
}