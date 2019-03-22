template<unsigned int I> int foo(unsigned int x) { return x << I; }
const unsigned int f = foo<31>(0);
const unsigned int g = foo<100>(0);
template<unsigned int I> int hoo(unsigned int x) { return x << 32; }
const unsigned int h = hoo<100>(0);