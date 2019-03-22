void f()
{
   struct foo *pFoo = NULL;
   size_t len;

   while (pFoo)
      pFoo = pFoo->next;

   len = sizeof(pFoo->data);
}