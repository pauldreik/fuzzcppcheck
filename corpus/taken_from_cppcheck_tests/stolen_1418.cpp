class Fred {
    int x;
public:
    Fred() { Init(); }
    void Init(int i = 0);
};
void Fred::Init(int i) { x = i; }