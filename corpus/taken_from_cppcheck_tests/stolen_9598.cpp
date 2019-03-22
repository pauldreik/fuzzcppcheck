class  A : public x
{
public:
  A()
  {
    a = new char[10];
    foo(a);
  }
private:
  char *a;
};