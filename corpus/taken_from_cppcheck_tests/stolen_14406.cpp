void foo(long verbose,bool bFlag)
{
  double t;
  if (bFlag)
  {
    if (verbose)
      t = 1;
    if (verbose)
      std::cout << (12-t);
  }
}