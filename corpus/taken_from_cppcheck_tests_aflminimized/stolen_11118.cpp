class A { class B { template<class T> const unsigned foo(); }; } ; template<class T> const unsigned A::B::foo() { return 0; }