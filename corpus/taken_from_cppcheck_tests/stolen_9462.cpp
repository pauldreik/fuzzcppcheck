void f() {
    int * i = new int;
    std::shared_ptr<int> x(i);
    delete i;
}
