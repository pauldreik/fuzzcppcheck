namespace ZZ
{
    namespace YY
    {
        struct XX
        {};
    }
}
class B
{
    public:
    ZZ::YY::XX a;
    void foo(ZZ::YY::XX b)
    {
        a = b;
    }
};