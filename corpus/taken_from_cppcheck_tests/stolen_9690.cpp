struct A {
    FILE* f;
    char* c;
    void* m;
};

void func() {
    struct A a;
    a.f = fopen("test", "r");
    a.c = new char[12];
    a.m = malloc(12);
    fclose(a.f);
    delete [] a.c;
    free(a.m);
}