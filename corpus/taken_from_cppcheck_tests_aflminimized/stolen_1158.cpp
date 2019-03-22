class A
{
public:
    void foo( AA::BB::CC::DD b );
    AA::BB::CC::DD a;
};
void A::foo( AA::BB::CC::DD b )
{
    a = b;
}