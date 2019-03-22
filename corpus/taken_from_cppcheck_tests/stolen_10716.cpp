struct foo {
  int a,b;
};

int main() {
  struct foo x;
  x.a = _mm_set1_ps(1.0);
  x.a = _mm_set1_ps(2.0);
}