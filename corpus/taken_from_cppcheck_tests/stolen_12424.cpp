void foo(std::string::iterator& i) {
    while (!(i == str.end() || !std::isalpha(*i))) {
        std::cout << *i;
        i ++;
    }
}
