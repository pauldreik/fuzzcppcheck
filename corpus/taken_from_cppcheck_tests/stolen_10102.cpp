class Base;
void foo()
{
    Base * b = (const Base *) new Derived();
}