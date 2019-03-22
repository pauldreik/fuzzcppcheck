class Fred
{
public:
    int x;
    void a() { x = 1; }
    void b();
};
void Fred::b() { a(); }