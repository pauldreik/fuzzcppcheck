struct AB { char a[10]; };
void foo(AB *ab) {
    mystrncpy(x, ab->a, 100);
}