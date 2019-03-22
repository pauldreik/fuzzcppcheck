struct F {
   char* c;
   F() { c = malloc(100); }
   F(const F &f) = delete;
   F&operator=(const F &f);
   ~F();
};