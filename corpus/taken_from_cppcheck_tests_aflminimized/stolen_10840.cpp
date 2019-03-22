class A
{
    A(B && b)
    :b1(std::move(b)),
     b2(std::move(b))
    {}
    B b1;
    B b2;
};