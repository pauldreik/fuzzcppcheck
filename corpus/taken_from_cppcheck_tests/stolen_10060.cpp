void f()
{
int foo = 0;
std::vector<int> vec(10);
BOOST_FOREACH(int& i, vec)
{
 foo += 1;
 if(foo == 10)
 {
  return 0;
 }
}
}