class Fred {
    std::string& s;
    Fred(const std::string& s_) : s(s_) { s = "foo"; }
};