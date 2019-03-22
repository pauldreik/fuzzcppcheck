struct Data { int x; int y; };
struct F {
   Data* c;
   F() { c = new Data; }
   F(const F &f);
   F&operator=(const F&);};