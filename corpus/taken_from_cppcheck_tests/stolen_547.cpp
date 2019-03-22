struct Struct { unsigned m_Var[1]; };
void f() {
    struct Struct * s = calloc(40);
    s->m_Var[1] = 1;
}