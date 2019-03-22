void f(struct KEY *key) {
  key->x = 0;
}

int main() {
  struct KEY *tmp = 0;
  struct KEY k;

  if (condition) {
    tmp = &k;
  } else {
  }
  f(tmp);
}