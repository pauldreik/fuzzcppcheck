template<int n> struct B
{
  int a[n];
};

template<int x> class bitset: B<sizeof(int)>
{};

bitset<1> z;