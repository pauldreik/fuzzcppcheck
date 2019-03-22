class A {
    class B;
};
class A::B
{
  B & operator=(const B & b) { return b; }
};
