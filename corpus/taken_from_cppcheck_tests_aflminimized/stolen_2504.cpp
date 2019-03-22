void foo() {
    int a, b;
    FILE *file = fopen("test", "r");
    a = fscanf(file, "aa %s", bar);
    b = scanf("aa %S", bar);
    b = scanf("aa %ls", bar);
    sscanf(foo, "%[^~]", bar);
    scanf("%dx%s", &b, bar);
    fclose(file);
}