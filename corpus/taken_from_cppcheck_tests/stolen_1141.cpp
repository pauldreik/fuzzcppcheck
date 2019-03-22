namespace N
{
        class Base
        {
        public:
                int getResourceName();
                int var;
        };
}
using namespace N;
int Base::getResourceName() { return var; }