typedef struct { int value; } S;
int f(const S *s) { 
  int i = s ? s->value + 1 
            : s->value - 1; // <-- null ptr dereference 
  return i;
}
