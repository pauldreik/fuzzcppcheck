void f(const std::string& str) {
    long long ret = 0;
    std::istringstream istr(str);
    istr >> std::hex >> ret;
    return ret;
}