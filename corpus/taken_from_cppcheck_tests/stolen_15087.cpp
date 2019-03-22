void foo()
{
    char* ptr = new char[16];
    ptr[0] = 123;
    delete[] ptr;
}