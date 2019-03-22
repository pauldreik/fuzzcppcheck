class A {
public:
  inline A &operator =(int *other) { return (*this); };
  inline A &operator =(long *other) { return (*this = 0); };
};