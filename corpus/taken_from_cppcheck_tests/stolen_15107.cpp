void foo() {
    int* data = new int[100];
    int* p = data;
    for ( int i = 0; i < 10; ++i )
        p++;
}