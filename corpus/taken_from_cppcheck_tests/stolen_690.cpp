void f() {
  int *tab4; tab4 = malloc(20 * sizeof(int));
  tab4[19] = 0;
  free(tab4);
  tab4 = malloc(21 * sizeof(int));
  tab4[20] = 0;
  free(tab4);
}