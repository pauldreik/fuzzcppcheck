struct AB { int a; int b; };

int f(struct AB *ab) {
    ab->a = 1;
    ab->b = 2;
    ab++;
    ab->a = 1;
    ab->b = 2;
}