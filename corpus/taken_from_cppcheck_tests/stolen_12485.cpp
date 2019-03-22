void foo() {
    int n = 0;
    for(int x:v)
        n = x > n ? n : x;
}
