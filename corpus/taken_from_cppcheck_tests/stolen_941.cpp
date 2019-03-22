struct A {
    char *s;
    A& operator=(const B &b);
};
A& A::operator=(const B &b) {
    free(s);
    s = strdup(a.s);
    return *this;
};