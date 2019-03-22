namespace NS {
  class A { int x; void dostuff(); };
}
using namespace NS;
void A::dostuff() { x = 0; }
