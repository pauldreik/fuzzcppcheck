struct F {
   C* c;
   F() { c = new C; }
   F(const F &f);
   F&operator=(const F&);};