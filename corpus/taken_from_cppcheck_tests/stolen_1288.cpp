class X {
    int x;
public:
    X(int x) : x(x) { }
    int getX() { return x; }
};
class Y : public X {
    int y;
public:
    Y(int x, int y) : X(x), y(y) { }
    int getY() { return y; }
};
class Z : public Y {
    int z;
public:
    Z(int x, int y, int z) : Y(x, y), z(z) { }
    int getZ() { return z; }
};