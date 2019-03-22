int& f(int& a) {
    return a;
}
int* hello() {
    int x = 0;
    return &f(x);
}
