void foo(int y)
{
    char * x; x = NULL;
    for (int i = 0; i < 10000; i++) {
        x = new char[100];
        delete[] x;
    }
    delete[] x;
}