#include <functional>
class A
{
public:
    class Hash
    {
    public:
        std::size_t operator()(const A& a) const
        {
            (void)a;
            return 0;
        }
    };
};
namespace std
{
    template <>
    struct hash<A>
    {
        std::size_t operator()(const A& a) const noexcept
        {
            return A::Hash{}(a);
        }
    };
}