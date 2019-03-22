class Fred {
public:
    void set(int i, int j) { a[i].k = i; }
private:
    struct { int k; } a[4];
};