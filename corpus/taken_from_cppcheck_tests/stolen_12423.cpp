void foo(std::string::iterator& i) {
    while (!(!std::isalpha(*i) || i == str.end())) {
        std::cout << *i;
        i ++;
    }
}
