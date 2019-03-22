void f() {
   X x;
   g(std::move(x));
   y=x->y;
   z=x->z;
}