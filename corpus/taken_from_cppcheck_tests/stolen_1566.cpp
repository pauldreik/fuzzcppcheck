enum E { E1 };
struct X { E e = E1; };
struct Y {
    Y() {}
    X x;
};