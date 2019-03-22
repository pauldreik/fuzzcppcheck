class Class {
    Class() = delete;
    explicit Class(const Class& other) { }
    explicit Class(Class&& other) { }
    virtual int i() = 0;
};