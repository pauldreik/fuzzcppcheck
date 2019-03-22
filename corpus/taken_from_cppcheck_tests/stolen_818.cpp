class F
{
   public:
   char *c,*p,*d;
   F()
   {
      p=(char *)malloc(100);
      c=(char *)malloc(100);
      d=(char*)malloc(100);
   }
   ~F();
   F& operator=(const F&f);
};