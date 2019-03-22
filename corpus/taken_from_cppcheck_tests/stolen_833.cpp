struct F : NonCopyable {
   char* c;
   F() { c = malloc(100); }
   F(const F &f);
   ~F();
};