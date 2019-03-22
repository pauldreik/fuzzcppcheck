class Base;
void foo()
{
    Base * b = (const Base *) derived;
}