class Thing { Thing(); };
Thing * makeThing() { Thing *thing = new Thing; return thing; }

void f() {
  makeThing();
}