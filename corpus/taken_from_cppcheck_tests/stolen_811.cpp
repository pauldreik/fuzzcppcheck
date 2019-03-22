class F
{
   public:
   char *c,*p,*d;
   F(const F &f) : p(f.p), c(f.c)
   {
      p=(char *)malloc(strlen(f.p)+1);
      strcpy(p,f.p);
   }
   F(char *str)
   {
      p=(char *)malloc(strlen(str)+1);
      strcpy(p,str);
   }
   F&operator=(const F&);
   ~F();
};