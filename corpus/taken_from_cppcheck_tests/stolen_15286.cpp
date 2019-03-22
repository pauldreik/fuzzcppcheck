void f() {
   X x;
   g(std::move(x));
   y=x;
}