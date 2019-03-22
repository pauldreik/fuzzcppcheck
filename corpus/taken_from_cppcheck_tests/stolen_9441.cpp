void foo(int y)
{
    char * x; x = NULL;
    while(true) {
        x = new char[100];
        if (y++ > 100)
            break;
        delete[] x;
    }
    delete[] x;
}