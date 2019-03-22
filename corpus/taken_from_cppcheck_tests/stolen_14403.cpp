int foo()
{
    int ret;
    if (one())
        ret = 1;
    else
        throw 3;
    return ret;
}