class A {
    class szp;
};
class A::szp
{
  szp &operator =(int *other);
};
A::szp &A::szp::operator =(int *other) {}