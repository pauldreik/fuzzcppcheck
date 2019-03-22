void foo()
{
  int* ptr; ptr = NULL;
  try
    {
      ptr = new int(4);
    }
  catch(...)
    {
      delete ptr;
      throw;
    }
  delete ptr;
}