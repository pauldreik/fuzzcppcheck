struct A {
    std::string s;
    void clear() {
         std::string& r = sth; r = s;
         r.clear();
     }
};