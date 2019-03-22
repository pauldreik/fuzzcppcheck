std::string a();
std::string &a(int);
std::string &b() {
    return a(12);
}