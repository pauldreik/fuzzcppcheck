void f()
{
 int ar[10];
 for (int i = 0; i < 10; ++i)
 {
  switch(i)
  {
   case 8:
    ar[i] = 0;
    break;
   default:
    ar[i] = ar[i+1];
    break;
  };
 }
}