struct S {
    std::string data;
};
const char* test() {
    S s;
    std::string &ref = s.data;
    return ref.c_str();
}