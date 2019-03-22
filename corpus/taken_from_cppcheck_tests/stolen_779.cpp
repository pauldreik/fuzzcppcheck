int flags[256];
void foo(const char* str)
{
    flags[*str] = 0;
}