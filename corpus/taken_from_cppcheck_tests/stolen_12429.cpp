void foo(const char* c, std::string::iterator& i) {
    if (std::isalpha(*c) && i != str.end()) {
        std::cout << *c;
    }
}
