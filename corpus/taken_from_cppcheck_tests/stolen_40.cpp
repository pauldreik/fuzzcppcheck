struct SquarePack {
   void Foo() const;
};
void foo(SquarePack* s) {
   assert( s->Foo(); );
}