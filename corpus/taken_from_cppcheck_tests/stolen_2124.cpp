struct S { int i, j; }; template<int S::*p, typename U> struct X {}; X<&S::i, int> x = X<&S::i, int>(); X<&S::j, int> y = X<&S::j, int>(); 