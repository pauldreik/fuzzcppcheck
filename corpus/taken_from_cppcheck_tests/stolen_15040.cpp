void foo()
{
    char buf[8];
    char *srcdata;
    char vdata[8];
    if (a()) {
        buf[0] = 1;
        srcdata = buf;
    } else {
        srcdata = vdata;
    }
    b(srcdata);
}