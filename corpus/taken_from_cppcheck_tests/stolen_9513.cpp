void f() {
    int * i = new int;
    std::unique_ptr<int> x(i);
    x.release();
}
