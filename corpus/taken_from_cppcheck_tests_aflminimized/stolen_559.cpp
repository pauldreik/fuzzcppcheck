void f()
{
  char *p = NULL;  try{
  p = new char[10];
  }
  catch(...){
  return;
  }  p[0] = 0;
  p[9] = 9;
  delete [] p;
}