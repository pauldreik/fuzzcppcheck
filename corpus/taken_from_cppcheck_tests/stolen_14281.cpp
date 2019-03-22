void f(float x) {
  union lf { long l; float f; } u_lf;
  float hx = (u_lf.f = (x), u_lf.l);
}