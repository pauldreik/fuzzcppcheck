class E { E(E&); };
class F : E
{
   char *p;
   F() {
      p = malloc(100);
   }
   ~F();
   F& operator=(const F&f);
};