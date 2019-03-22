int f(void) {
   int x;
   while (a()) {
       if (b() && (x=1)) {
           return x;
       }
   }
   return 0;
}