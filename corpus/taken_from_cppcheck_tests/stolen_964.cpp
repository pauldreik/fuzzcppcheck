struct A {
     std::vector<int *> buf;
     operator int*() {return &buf[0];}
};
void f() {
    A a;
    memset(a, 0, 100);
}