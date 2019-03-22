class AA : public P {
public:
    AA():P(){}
    inline void vSetXPos(int x_)
    {
        UnknownScope::x = x_;
    }
};