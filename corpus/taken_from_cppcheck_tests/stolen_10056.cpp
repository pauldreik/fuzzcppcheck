void f(int x)
{
    int i = 0;
    if (x) {b()}
    else {
        for ( ; i < 10; ++i) ;
    }
}