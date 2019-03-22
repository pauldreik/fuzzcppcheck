class Class {
    Class() = delete;
    Class(const Class& other) = delete;
    Class(Class&& other) = delete;
    virtual int i() = 0;
};