int buf[256];
void foo()
{
    signed char ch = 0x80;
    buf[ch] = 0;
}