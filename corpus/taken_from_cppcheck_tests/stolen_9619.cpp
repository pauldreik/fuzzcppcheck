namespace NS
{
class Foo
{
public:
  void fct(int i);

private:
  char* data_;
};
}

using namespace NS;

void Foo::fct(int i)
{
  data_ = new char[42];
  delete data_;
  data_ = 0;
}
