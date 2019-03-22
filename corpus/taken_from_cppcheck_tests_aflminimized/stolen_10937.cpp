template <unsigned int i> void a()
{
    a<i-1>();
}

template <> void a<0>()
{ }

int main()
{
    a<2>();
    return 0;
}
