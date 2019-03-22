std::string &a(int);
std::string a();
std::string &b() {
    return a(12);
}