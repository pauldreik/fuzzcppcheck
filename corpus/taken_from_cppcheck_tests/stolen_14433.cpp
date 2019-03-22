int foo(const int iVar, unsigned int slot, unsigned int pin)
{
    int i;
    if (iVar == 0)
    {
        switch (slot)
        {
            case 4:  return 5;
            default: return -1;
        }
    }
    else
    {
        switch (pin)
        {
            case 0:   i =  2; break;
            default:  i = -1; break;
        }
    }
    return i;
}