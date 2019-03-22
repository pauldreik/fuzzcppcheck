class A {
public:
  A &operator =(int *other);
  A &operator =(long *other);
};
A &A::operator =(int *other) { return (*this); };
A &A::operator =(long *other) { return (*this = 0); };