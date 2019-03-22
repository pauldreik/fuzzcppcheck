int main(int argc, char **argv) {
  double *new = malloc(1*sizeof(double));
  free(new);
  return 0;
}