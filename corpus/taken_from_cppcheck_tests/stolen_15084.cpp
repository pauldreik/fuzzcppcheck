void foo()
{
    char* ptr = new ( std::nothrow ) char[16];
    delete[] ptr;
}