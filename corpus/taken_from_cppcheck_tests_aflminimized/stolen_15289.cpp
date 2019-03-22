void f() {
   X x;
   g(std::forward<X>(x).getA());
   y=x;
}