class X {
    int x;
public:
    X(int x) : x(x) { }
    int getX();
};
int X::getX() { return x; }
class Y : public X {
    int y;
public:
    Y(int x, int y) : X(x), y(y) { }
    int getY();
};
int Y::getY() { return y; }
class Z : public Y {
    int z;
public:
    Z(int x, int y, int z) : Y(x, y), z(z) { }
    int getZ();
};
int Z::getZ() { return z; }