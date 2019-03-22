void f() {
   X x;
   g(std::move(x));
   x.clear();
   y=x;
}