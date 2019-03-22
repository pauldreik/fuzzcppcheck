class A { public: int i; };
typedef const char (A :: * type1);
type1 t1 = &A::i;