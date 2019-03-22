class Class {
    Class() = delete;
    Class(const Class& other) { }
    Class(Class&& other) { }
    explicit Class(int i) { }
    explicit Class(const std::string&) { }
    Class(int a, int b) { }
};