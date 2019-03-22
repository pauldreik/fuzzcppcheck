struct AB {int a; int b;};
void f(void) {
   struct AB ab;
   while (true) {
       int a = 1+ab.a;
       do_something(a);
   }
}
