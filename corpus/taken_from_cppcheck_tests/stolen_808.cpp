template <typename T> class A
{
 public:
 virtual ~A(){}
};
template <typename T> class AA
{
 public:
 ~AA(){}
};
class B : public A<int>, public AA<double>
{
 public:
 ~B(){int a;}
};

AA<double> *p = new B; delete p;