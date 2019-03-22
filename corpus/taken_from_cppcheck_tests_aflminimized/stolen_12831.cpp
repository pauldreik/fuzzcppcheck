class Fred {
    void f(int i) { }
    void f(float f) const { }
    void a() { f(1); }
    void b() { f(1.f); }
};