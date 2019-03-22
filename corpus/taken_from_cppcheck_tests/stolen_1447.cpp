struct Fred
{
    Fred() { Init(); }
    void operator=(const Fred &fred) { Init(); }
private:
    void Init() { i = 0; }
    int i;
};