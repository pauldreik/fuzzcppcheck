namespace Blah {
  struct foo { int x;};
  struct bar {
    int x;
    union { char y; };
  };
}