class P {
public:
    P() { x=0.0; y=0.0; }
    double x,y;
};
class A : public P {
public:
    A():P(){}
    void SetPos(double xPos, double yPos) {
        x=xPos;
        y=yPos;
    }
};
