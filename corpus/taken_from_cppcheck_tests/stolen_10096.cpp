class Base;
void foo()
{
    Base * b = (const Base * const) derived;
}