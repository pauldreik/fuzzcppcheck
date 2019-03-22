void f()
{
    int i;
    {
        union ab {
            int a,b;
        }
        i = 0;
    }
    return i;
}