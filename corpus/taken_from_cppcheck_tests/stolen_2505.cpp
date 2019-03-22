void foo() {
    scanf("%5s", bar);
    scanf("%5[^~]", bar);
    scanf("aa%%s", bar);
    scanf("aa%d", &a);
    scanf("aa%ld", &a);
    scanf("%*[^~]");
}