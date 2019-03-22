template <typename T, typename U=T>
class A
{
public:
  void foo() {
    int a;
    a = static_cast<U>(a);
  }
};

template <typename T>
class B
{
protected:
  A<int> a;
};

class C
  : public B<int>
{
};
