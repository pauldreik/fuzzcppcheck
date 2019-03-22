int &f( int & k )
{
    static int &r = k;
    return r;
}
