void f() {
    A a;
    auto h = [a=std::move(a)](){return g(std::move(a));};    b = a;
}