void foo(std::string::iterator& i) {
    for (; std::isalpha(*i) || i == str.end() ;) {
        std::cout << *i;
        i ++;
    }
}
