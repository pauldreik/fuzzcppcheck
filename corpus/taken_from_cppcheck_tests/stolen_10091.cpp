void f(Foo x) {
   Foo &r = x;
   if (cond) {
       r.dostuff();
   }
}