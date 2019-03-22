class F
{
   public:
   char *c,*p,*d;
   F(char *str,char *st,char *string)
   {
      p=(char *)malloc(100);
      strcpy(p,str);
      c=(char *)malloc(100);
      strcpy(p,st);
      d=(char *)malloc(100);
      strcpy(p,string);
   }
   F(const F &f)
   {
      p=(char *)malloc(strlen(str)+1);
      strcpy(p,f.p);
      c=(char *)malloc(strlen(str)+1);
      strcpy(p,f.p);
   }
   ~F();
   F& operator=(const F&f);
};