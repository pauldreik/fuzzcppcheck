class Foo {
    class Fred
    {
    public:
        struct AB {
            struct CD { };
        };
        bool f(AB::CD * cd);
    };
};
bool Foo::Fred::f(Foo::Fred::AB::CD * cd)
{
}