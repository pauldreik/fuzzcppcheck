void a(const char **c);
void b() {
    const char *c;
    a(&c);
}