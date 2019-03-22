class F {
   char *p;
   F(const F &f) {
      p = f.p;
   }
   F(char *str) {
      p = malloc(strlen(str)+1);
   }
   ~F();
   F& operator=(const F&f);
};