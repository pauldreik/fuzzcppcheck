struct A {
    std::string s;
    void clear() {
         std::string* p = &s;
         p->clear();
     }
};