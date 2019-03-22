void foo()
{
    char buf[8];
    char *srcdata;
    char vdata[8];
    if (a()) {
        srcdata = buf;
    }
    srcdata = vdata;
    b(srcdata);
}