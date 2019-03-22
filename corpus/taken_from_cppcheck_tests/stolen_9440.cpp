int foo()
{
   int* a; a = new int;
   bool doDelete; doDelete = true;
   if (a != 0)
   {
       doDelete = false;
       delete a;
   }
   if(doDelete)
       delete a;
   return 0;
}