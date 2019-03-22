class F {
   char *p;
   F() {
      p = malloc(100);
   }
   F(F& f);
   ~F();
   F& operator=(const F&f);
};