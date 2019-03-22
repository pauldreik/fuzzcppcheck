void foo(std::string::iterator& i) {
    if (std::isalpha(*i) && i != str.end()) {
        std::cout << *i;
    }
}
