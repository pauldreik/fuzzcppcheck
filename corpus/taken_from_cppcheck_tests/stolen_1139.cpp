namespace N
{
        class Base
        {
        public:
                int getResourceName();
                int var;
        };
}
int N::Base::getResourceName() { return var; }