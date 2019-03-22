void f(int x) {
    const unsigned char i = 0;
    if (x) {
        for ( ; i < 10; ++i) ;
    }
}