class Fred {
    int x;
    int y;
public:
    Fred() { Init(0); }
    void Init(int i, int j = 0);
};
void Fred::Init(int i, int j) { x = i; y = j; }