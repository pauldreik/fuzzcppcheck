void f(int x) {
    int i[5];
    int* j;
    if (x)
        j = i;
    foo(j);
}