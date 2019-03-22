void foo()
{
    char buf[8];
    char *srcdata;
    char vdata[8];
    if (a()) {
        srcdata = vdata;
    }
    srcdata = buf;
    b(srcdata);
}