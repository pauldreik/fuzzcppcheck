void foo()
{
    char* ptr = new ( nothrow ) char[16];
    delete[] ptr;
}