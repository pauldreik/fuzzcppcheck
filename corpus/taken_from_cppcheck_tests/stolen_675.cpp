struct S { int m[9]; };
int f(S * s) {
    return s->m[sizeof(s->m)];
}
