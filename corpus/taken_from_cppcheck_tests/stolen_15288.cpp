void f() {
   X x;
   g(std::move(x).getA());
   y=x;
}