struct A {
    std::string s;
    void clear() {
         const std::string& r = s;
         r.somefunction();
     }
};