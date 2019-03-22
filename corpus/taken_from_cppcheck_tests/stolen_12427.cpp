void foo(std::string::iterator& i) {
    for (char c = *i; isRunning && i != str.end() ;) {
        std::cout << c;
        i ++;
    }
}
