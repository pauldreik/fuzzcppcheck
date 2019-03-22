void a(int i)
{
    char *str = new char[0x10];
    str[i] = 0;
}
void b() { a(16); }