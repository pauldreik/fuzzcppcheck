struct Struct { unsigned m_Var[1]; };
void f() {
    struct Struct s;
    s.m_Var[1] = 1;
}