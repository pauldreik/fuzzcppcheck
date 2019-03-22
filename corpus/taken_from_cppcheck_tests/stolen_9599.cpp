class  A : public x
{
public:
  A();
private:
  char *a;
};
A::A()
{
  a = new char[10];
  foo(a);
}