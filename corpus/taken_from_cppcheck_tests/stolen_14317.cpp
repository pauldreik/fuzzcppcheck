float foo() {
  float source[2] = {3.1, 3.1};
  float (*sink)[2] = &source;
  return (*sink)[0];
}