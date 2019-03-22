class F
{
   public:
   char *c;
   const char *p,*d;
   F(char *str,char *st,char *string)
   {
      p=str;
      d=st;
      c=(char *)malloc(strlen(string)+1);
      strcpy(d,string);
   }
   F(const F &f)
   {
      p=f.p;
      d=f.d;
      c=(char *)malloc(strlen(str)+1);
      strcpy(d,f.p);
   }
   ~F();
   F& operator=(const F&f);
};