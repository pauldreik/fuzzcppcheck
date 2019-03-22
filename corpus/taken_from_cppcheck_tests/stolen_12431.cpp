void foo(std::string::iterator& i) {
    if ((i == str.end() || *i) || (isFoo() && i != str.end())) {
        std::cout << "foo";
    }
}
