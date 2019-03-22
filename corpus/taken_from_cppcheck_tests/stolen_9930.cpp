void f(const std::ostringstream& oss, char* q) {
    char const* p = 0;
    oss << p;
    oss << foo << p;
    if(q == 0)
        oss << foo << q;
}