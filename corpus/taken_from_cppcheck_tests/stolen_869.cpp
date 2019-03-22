class A {
    class B;
};
class A::B
{
  B & operator=(const B &);
};
A::B & A::B::operator=(const A::B & b) { return b; }
