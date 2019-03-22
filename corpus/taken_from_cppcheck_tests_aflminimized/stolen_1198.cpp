namespace B {
    namespace D {
        typedef int DKIPtr;
    }
    class ZClass  {
        void set(const ::B::D::DKIPtr& p) {
            membervariable = p;
        }
        ::B::D::DKIPtr membervariable;
    };
}