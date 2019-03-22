int a(FArchive &arc) {
    int *p;
    arc << p;
    return *p;
}