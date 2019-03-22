class A
{
  public:
  static char buf[20];
};
char A::buf[20];
int main()
{
  char buf[2];
  A::buf[10] = 0;
}