void init(int* &g);
void f(int *p = 0) {
    init(p);
    *p = 0;
}