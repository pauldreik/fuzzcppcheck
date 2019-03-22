void foo(std::string::iterator& i) {
    if (i != str.end() && std::isalpha(*i)) {
        std::cout << *i;
    }
}
