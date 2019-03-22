void f(struct s *f1) {
    struct s f2;
    f2.a = malloc(100);
    *f1 = f2;
}