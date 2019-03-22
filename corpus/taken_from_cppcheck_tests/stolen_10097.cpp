class Base;
void foo()
{
    Base * b = (volatile Base *) derived;
}