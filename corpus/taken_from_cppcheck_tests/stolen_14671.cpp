struct AB { int a; int b; };
void do_something(struct AB *ab);
int f() {
    struct AB *ab = malloc(sizeof(struct AB));
    do_something(ab);
}