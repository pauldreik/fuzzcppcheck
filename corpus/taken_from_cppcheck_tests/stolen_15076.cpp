void foo() {
    static int x = 0;
    print(x);
    if(x > 5)
        x = 0;
    else
        x++;
}