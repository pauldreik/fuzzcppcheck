class Fred {
public:
    int x;
    int a() const { return x; }
    void b() { a(); }
};