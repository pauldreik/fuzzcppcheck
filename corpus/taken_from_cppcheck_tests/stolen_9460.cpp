void f() {
    int * i = new int;
    delete i;
    std::unique_ptr<int> x(i);
}
