class Foo {
   friend class Bar;
   int member;
public:
   Foo()
   {
      if (1) {}
   }
};
