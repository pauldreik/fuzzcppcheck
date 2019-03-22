struct A { int foo; };
int* f(std::vector<A> v) {
    auto it = v.begin();
    return &it->foo;
}
