int a;
bool b = false;
int foo() {
   if (b) { a = 1+2 };
   return a;
}
assert(foo() == 3); 
