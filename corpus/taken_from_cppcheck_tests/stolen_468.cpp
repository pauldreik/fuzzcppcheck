struct { char data[10]; } abc;
static char f()
{
    char data[1];
    return abc.data[1];
}