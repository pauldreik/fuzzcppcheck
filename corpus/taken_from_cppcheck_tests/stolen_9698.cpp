typedef struct foo { char *realm; } foo;
void build_principal() {
  foo f;
  ((f)->realm) = strdup(realm);
  if(f->realm == NULL) {}
}