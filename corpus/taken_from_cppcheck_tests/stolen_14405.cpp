int f(int a, int b)
{
   int x;
   if (a)
      x = a;
   else {
      do { } while (f2());
      x = b;
   }
   return x;
}