struct AB { char a[NUM]; char b[NUM]; }
void f(struct AB *ab) {
    ab->a[0] = 0;
}