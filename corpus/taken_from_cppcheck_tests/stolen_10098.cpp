class Base;
void foo()
{
    Base * b = (volatile Base * const) derived;
}