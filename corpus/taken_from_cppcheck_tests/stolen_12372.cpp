void f(std::string &s) {
    for(string::iterator it = s.begin(); it != s.end(); it++) {
        it = s.insert(++it, 0);
    }
}