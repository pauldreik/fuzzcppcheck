struct t_udf_file {  int dir_left; };

void f() {
  struct t_udf_file *newf;
  newf = malloc(sizeof(*newf));
  if (!newf) return 0;
}