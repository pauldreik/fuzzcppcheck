class kalci
{
   public:
   char *c,*p,*d;
   kalci()
   {
      p=(char *)malloc(100);
      strcpy(p,"hello");
      c=(char *)malloc(100);
      strcpy(p,"hello");
      d=(char *)malloc(100);
      strcpy(p,"hello");
   }
   kalci(const kalci &f)
   {
      p=(char *)malloc(strlen(str)+1);
      strcpy(p,f.p);
      c=(char *)malloc(strlen(str)+1);
      strcpy(p,f.p);
      d=(char *)malloc(strlen(str)+1);
      strcpy(p,f.p);
   }
   ~kalci();
   kalci& operator=(const kalci&kalci);
};