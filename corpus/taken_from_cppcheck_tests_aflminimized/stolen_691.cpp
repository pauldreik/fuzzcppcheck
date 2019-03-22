void f() {
  int *tab4 = malloc(20 * sizeof(int));
  tab4[19] = 0;
  tab4 = realloc(tab4,21 * sizeof(int));
  tab4[20] = 0;
  free(tab4);
}