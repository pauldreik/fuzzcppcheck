void foo(std::string::iterator& i) {
    if(foo) { bar(); }
    else if (std::isalpha(*i) && i != str.end()) {
        std::cout << *i;
    }
}
