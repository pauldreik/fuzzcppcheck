template <unsigned int i> void a()
{ }

template <unsigned int i> void b()
{ a<i>(); }

int main()
{
    b<2>();
    return 0;
}
