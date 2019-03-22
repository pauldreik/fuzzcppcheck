class A {
public:
  typedef int F(int idx);
};
class B {
public:
  A::F ** f;
};
int main()
{
  B * b = new B;
  b->f = new A::F * [ 10 ];
}