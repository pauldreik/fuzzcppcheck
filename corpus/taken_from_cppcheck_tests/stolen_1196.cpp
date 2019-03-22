struct A {
    std::string s;
    void clear() {
         const std::string* p = &s;
         p->somefunction();
     }
};