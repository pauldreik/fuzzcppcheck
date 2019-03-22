class Fred
{
private:
    long x;
public:
    Fred() {
        x = 0;
    }
    bool isValid() {
        return (x == 0x11224488);
    }
};