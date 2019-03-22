void check_dlsym(void*& h)
{
  typedef void (*function_type) (void);
  function_type fn;
  fn = reinterpret_cast<function_type>(dlsym(h, "try_allocation"));
  fn();
}