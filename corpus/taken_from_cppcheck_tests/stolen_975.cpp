class Fred
{
    std::string s;
};
class Pebbles: public Fred {};
void f()
{
    Pebbles pebbles;
    memset(&pebbles, 0, sizeof(pebbles));
}