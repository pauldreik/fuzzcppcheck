void f() {
    ABC abc;
    int a[1];

    abc.a = a;
    init(&abc);
    return a[0];
}