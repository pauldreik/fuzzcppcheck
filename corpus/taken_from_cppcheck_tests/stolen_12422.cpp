void foo(std::string::iterator& i) {
    do {
        std::cout << *i;
        i ++;
    } while (std::isalpha(*i) && i != str.end());
}
