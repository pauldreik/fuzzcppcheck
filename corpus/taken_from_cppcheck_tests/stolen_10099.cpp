class Base;
void foo()
{
    Base * b = (const volatile Base *) derived;
}