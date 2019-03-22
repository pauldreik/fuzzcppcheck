class A {
private:
    friend std::ostream & operator<<(std::ostream &, const A&);
};
std::ostream & operator<<(std::ostream &os, const A&) {
    os << "This is class A";
}