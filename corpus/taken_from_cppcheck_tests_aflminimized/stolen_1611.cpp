class ABC { };
class Fred : private ABC
{
public:
    Fred() { Init(); }
private:
    int i;
};