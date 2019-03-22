int flags[256];
void foo(const char* str)
{
    flags[(unsigned char)*str] = 0;
}