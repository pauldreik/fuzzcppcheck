struct A {  template<typename T> struct X { T t; };};template<> struct A::X<int> { int *t; };