int fun(const char *buf1)
{
  const char *buf1_ex = "foobarbaz";
  return strncmp(buf1, buf1_ex, sizeof(buf1_ex)) == 0;
}