namespace N
{
        class Base
        {
        public:
                int getResourceName();
                int var;
        };
}
namespace N
{
        int Base::getResourceName() { return var; }
}