namespace NS
{
class Foo
{
public:
  void fct();

private:
  char* data_;
};
}

using namespace NS;

void Foo::fct()
{
  data_ = new char[42];
  delete data_;
  data_ = 0;
}
