class Fred {
    int s;
    void foo(int * a);
};
void Fred::foo(int * a) { s = *a; }