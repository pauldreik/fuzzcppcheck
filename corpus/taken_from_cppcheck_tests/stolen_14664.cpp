struct AB { int a; int b; };
int f() {
    struct AB *ab = malloc(sizeof(struct AB));
    return ab->a;
}