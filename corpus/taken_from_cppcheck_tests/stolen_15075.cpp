void foo()
{
    static int i = 0;
    if(i < foo())
        i += 5;
}