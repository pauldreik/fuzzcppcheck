class MyObject {
    int tmp;
    MyObject() : tmp(0) {}
public:
    void set(std::stringstream &in) { in >> tmp; }
};