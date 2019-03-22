void f() {
   X x;
   g(std::forward<X>(x));
   y=x;
}