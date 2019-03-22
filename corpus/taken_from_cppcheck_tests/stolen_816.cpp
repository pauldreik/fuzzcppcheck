class F {
   char *c;
   F(char *str,char *st,char *string) {
      p=(char *)malloc(100);
   }
   F(const F &f)
      : p(malloc(size))
   {
   }
   ~F();
   F& operator=(const F&f);
};