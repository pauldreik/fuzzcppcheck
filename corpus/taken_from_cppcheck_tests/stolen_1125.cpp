class test {
  public:
    test();
    const char* get() const;
    char* get();
  private:
    char* value_;
};
test::test()
{
  value_ = 0;
}
const char* test::get() const
{
  return value_;
}
char* test::get()
{
  return value_;
}