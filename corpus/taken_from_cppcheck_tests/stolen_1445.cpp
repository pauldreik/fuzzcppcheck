struct A
{
  A() : i(0), j(0) {}

  A &operator=(const int &value)
  {
    i = value;
    return (*this);
  }

  int i;
  int j;
};