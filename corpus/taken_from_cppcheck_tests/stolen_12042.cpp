int f() {
  module_config_t *tab = module;
  memset(tab + confsize, 0, sizeof(tab[confsize]));
}