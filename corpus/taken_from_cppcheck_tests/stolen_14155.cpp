const int a = 1;
const int b = 2;
template<class T>
struct A {
    int x = a < b ? b : a;};
