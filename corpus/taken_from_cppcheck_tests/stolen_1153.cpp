class Fred
{
public:
    struct AB { };
    bool f(AB * ab);
};
bool Fred::f(Fred::AB * ab)
{
}