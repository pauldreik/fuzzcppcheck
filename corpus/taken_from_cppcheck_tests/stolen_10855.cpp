void f() {
    A a;
    gx(std::move(a).x());
    gy(std::move(a).y());
}