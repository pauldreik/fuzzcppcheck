class A { };
class B
{
    A *a;
    B() : a(new A)
    { }
};
