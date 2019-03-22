void f()
{
   struct foo *pFoo = NULL;
   size_t len;

   len = sizeof(*pFoo) - sizeof(pFoo->data);

   if (pFoo)
      bar();
}