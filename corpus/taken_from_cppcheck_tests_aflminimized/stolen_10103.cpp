class Base;
void foo()
{
    Base * b = (const Base *) new short[10];
}