namespace NS {
    class Fred
    {
    public:
        struct AB {
            struct CD { };
        };
        bool f(AB::CD * cd);
    };
}
bool NS::Fred::f(NS::Fred::AB::CD * cd)
{
}