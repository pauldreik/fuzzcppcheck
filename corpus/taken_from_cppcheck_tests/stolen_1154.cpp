class Fred
{
public:
    struct AB {
        struct CD { };
    };
    bool f(AB::CD * cd);
};
bool Fred::f(Fred::AB::CD * cd)
{
}