void f(bool b) {
    std::string s;
    if(b) {
        char buf[3];
        s = buf;
    }
    std::cout << s;
}
