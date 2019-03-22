void f()
{
  bool b=false;
  { b = false; }
  {
    b = true;
  }

  if( b )
  {
    a();
  }
}
