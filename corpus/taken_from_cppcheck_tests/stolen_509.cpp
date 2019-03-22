void f() {
    int a[2];
    for (int i = 0; i < 4; i+=2)
        do_stuff(a+i);
}