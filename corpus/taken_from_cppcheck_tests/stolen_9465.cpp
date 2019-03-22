void f() {
    int * i = new int[1];
    std::unique_ptr<int[]> x(i);
    delete i;
}
