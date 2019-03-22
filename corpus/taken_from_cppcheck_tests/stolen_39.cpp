struct SquarePack {
   void Foo();
};
void foo(SquarePack s) {
   assert( s.Foo(); );
}