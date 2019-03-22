template <class T>
void fn2 (T t = []{return 1;}())
{}
int main()
{
  fn2<int>();
}
