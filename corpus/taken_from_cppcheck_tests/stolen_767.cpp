int buf[256];
void foo()
{
    unsigned char ch = 0x80;
    buf[ch] = 0;
}