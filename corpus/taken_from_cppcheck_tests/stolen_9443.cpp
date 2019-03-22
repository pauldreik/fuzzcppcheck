void foo(int y)
{
    char * x; x = NULL;
    while (isRunning()) {
        x = new char[100];
        delete[] x;
    }
    delete[] x;
}