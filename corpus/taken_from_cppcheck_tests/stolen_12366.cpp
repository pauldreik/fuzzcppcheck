void f(std::map<int,int> &ints) {
    for (std::map<int,int>::iterator it = ints.begin(); it != ints.end(); ++it) {
        ++it->second;
    }
}