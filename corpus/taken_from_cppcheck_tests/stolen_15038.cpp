void foo()
{
    char buf[8];
    char *srcdata;
    if (a()) {
        srcdata = buf;
    }
    srcdata = vdata;
    b(srcdata);
}