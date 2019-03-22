class Fred
{
public:
    Fred() { Init(); }
private:
    friend ABC;
    int i;
};