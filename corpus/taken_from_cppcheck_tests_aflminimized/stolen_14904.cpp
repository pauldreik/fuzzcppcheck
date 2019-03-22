int foo()
{
    char buf[5];
    char *ptr = buf - 1;
    *(++ptr) = 0;
}