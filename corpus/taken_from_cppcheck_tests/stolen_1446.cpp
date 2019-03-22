struct Fred
{
    Fred() { i = 0; }
    void operator=(const Fred &fred) { }
    int i;
};