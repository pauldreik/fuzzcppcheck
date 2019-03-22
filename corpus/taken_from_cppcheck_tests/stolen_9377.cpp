void f() {
   const char *s = "0";
   printf("%ld%lld", atol(s), atoll(s));
}