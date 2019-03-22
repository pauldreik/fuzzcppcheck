namespace N
{
        class Base
        {
        };
}
namespace N
{
        class Derived : public Base
        {
        public:
                int getResourceName() { return var; }
                int var;
        };
}