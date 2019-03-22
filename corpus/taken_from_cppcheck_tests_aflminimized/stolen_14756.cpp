class A {
public:
    static void * operator new(std::size_t);
    static void * operator new[](std::size_t);
};
void * A::operator new(std::size_t s) {
    return malloc(s);
}
void * A::operator new[](std::size_t s) {
    return malloc(s);
}