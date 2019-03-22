void foo()
{
    char buf[8];
    char *srcdata;
    if (a()) {
        buf[0] = 1;
        srcdata = buf;
        srcdata = vdata;
    }
    b(srcdata);
}