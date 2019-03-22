struct S {
    std::string data;
};
const S& getS();
const char* test() {
    const struct S &s = getS();
    return s.data.c_str();
}