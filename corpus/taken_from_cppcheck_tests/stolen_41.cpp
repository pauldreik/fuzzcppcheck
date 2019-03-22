struct SquarePack {
   static void Foo();
};
void foo(SquarePack* s) {
   assert( s->Foo(); );
}