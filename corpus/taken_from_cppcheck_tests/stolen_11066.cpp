struct A {}; struct B { template <void (A::*)() volatile> struct BB {}; template <bool BT> static bool foo(int) { return true; } void bar() { bool b = foo<true>(0); }};