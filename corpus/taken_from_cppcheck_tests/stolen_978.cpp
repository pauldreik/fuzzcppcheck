class Fred
{
};
class Wilma
{
    virtual ~Wilma();
};
class Pebbles: public Fred, Wilma {};
void f()
{
    Pebbles pebbles;
    memset(&pebbles, 0, sizeof(pebbles));
}