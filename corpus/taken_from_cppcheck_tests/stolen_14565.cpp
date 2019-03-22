void a(struct Fred *fred) {
    fred->x = 0;
}

void b() {
    struct Fred *p;
    a(p);
}