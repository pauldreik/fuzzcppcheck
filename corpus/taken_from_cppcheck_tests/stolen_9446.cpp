void foo(int y)
{
    char * x; x = NULL;
    do {
        x = new char[100];
        if (y++ > 100)
            break;
        delete[] x;
    } while (true);
    delete[] x;
}