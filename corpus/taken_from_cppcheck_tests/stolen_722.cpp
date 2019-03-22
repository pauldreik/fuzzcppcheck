int getnumber();
void f()
{
    char str[5];
    mysprintf(str, "%d: %s", getnumber(), "abcde");
}