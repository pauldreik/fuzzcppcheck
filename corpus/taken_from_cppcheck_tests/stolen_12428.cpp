void foo(char* c, std::string::iterator& i) {
    if (*c && std::isalpha(*i) && i != str.end()) {
        std::cout << *i;
    }
}
