class IncrementFunctor
{
public:
    void operator()(int &i)
    {
        ++i;
    }
};

int main()
{
    int a = 1;
    IncrementFunctor()(a);
    return a;
}
