namespace AA
{
    namespace BB
    {
        namespace CC
        {
            struct DD
            {};
        }
    }
}
class A
{
    public:

    AA::BB::CC::DD a;
    void foo(AA::BB::CC::DD b)
    {
        a = b;
    }
};