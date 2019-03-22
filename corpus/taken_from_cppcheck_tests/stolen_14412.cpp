int foo()
{
  int retval;
  if (condition) {
    { }
    retval = 1; }
  else
    retval = 2;
  return retval;
}