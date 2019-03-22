struct A {
    std::string s;
    void clear() {
         std::string& r = s;
         r.clear();
     }
};