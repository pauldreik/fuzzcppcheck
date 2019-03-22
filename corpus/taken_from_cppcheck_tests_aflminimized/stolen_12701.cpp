template<int i> class X { };
X< 1>2 > x1;
X<(1>2)> x2;
template<class T> class Y { };
Y<X<1>> x3;
Y<X<6>>1>> x4;
Y<X<(6>>1)>> x5;
