struct data {
  struct { int i; } fc;
};
struct state {
  struct data d[123];
};
void func(struct state *s) {
  s->foo[s->x++] = 2;
  s->d[1].fc.i++;
}