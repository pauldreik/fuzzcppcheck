typedef float realnum;
struct multilevel_data {
  realnum *GammaInv;
  realnum data[1];
};
void *new_internal_data() const {
  multilevel_data *d = (multilevel_data *) malloc(sizeof(multilevel_data));
  memset(d, 0, sizeof(multilevel_data));
  return (void*) d;
}