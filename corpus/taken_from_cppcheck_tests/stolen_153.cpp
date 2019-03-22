class foo {
  void free(void* );
  void someMethod() {
    char **dst_copy = NULL;
    free(&dst_copy);
  }
};