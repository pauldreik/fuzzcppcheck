class A {
    class B;
};
class A::B
{
  A::B & operator=(const A::B &);
};
A::B & A::B::operator=(const A::B & b) { return b; }
