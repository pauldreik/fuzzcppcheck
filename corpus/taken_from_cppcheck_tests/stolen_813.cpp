class F
{
   public:
   char *c,*p,*d;
   F(const F &f) :p(f.p)
   {
   }
   F(char *str)
   {
      p=(char *)malloc(strlen(str)+1);
      strcpy(p,str);
   }
   ~F();
   F& operator=(const F&f);
};