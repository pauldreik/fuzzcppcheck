void foo(void (*conv)(char**)) {
  char * ptr=(char*)malloc(42);
  free(ptr);
  (*conv)(&ptr);
}