void foo() {
    struct {FILE *f1; FILE *f2;} a;
    a.f1 = fopen(name,mode);
    a.f2 = fopen(name,mode);
    fclose(a.f1);
    fclose(a.f2);
}