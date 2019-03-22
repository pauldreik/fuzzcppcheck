void foo(int y)
{
    char * x; x = NULL;
    for (;;) {
        x = new char[100];
        if (y++ > 100)
            break;
        delete[] x;
    }
    delete[] x;
}