void foo(std::string::iterator& i) {
    while (std::isalpha(*i) && i != str.rend()) {
        std::cout << *i;
        i ++;
    }
}
