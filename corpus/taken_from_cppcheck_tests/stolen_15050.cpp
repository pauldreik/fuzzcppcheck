void foo()
{
    char b1[8];
    char b2[8];
    char b3[8];
    char b4[8];
    char *pb;
    if (a == 1)
        pb = b1;
    else {
        if (a == 2)
            pb = b2;
        else {
            if (a == 3)
                pb = b3;
            else
                pb = b4;
        }
    }
    b(pb);
}