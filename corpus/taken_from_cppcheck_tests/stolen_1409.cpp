namespace Nsp
{
    class B { };
}
class Altren : public Nsp::B
{
public:
    Altren () : Nsp::B(), mValue(0)
    {
    }
private:
    int mValue;
};