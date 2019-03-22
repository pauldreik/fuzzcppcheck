void f() {
  const bool b = g();
  if (!b && g()) {}
}
