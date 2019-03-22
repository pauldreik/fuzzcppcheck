namespace A {
    namespace B {
        namespace D {
            typedef int DKIPtr;
        }
        struct ZClass {
            void set1(const A::B::D::DKIPtr& p) {
                membervariable1 = p;
            }
            void set2(const ::A::B::D::DKIPtr& p) {
                membervariable2 = p;
            }
            void set3(const B::D::DKIPtr& p) {
                membervariable3 = p;
            }
            void set4(const ::B::D::DKIPtr& p) {
                membervariable4 = p;
            }
            void set5(const C::D::DKIPtr& p) {
                membervariable5 = p;
            }
            A::B::D::DKIPtr membervariable1;
            ::A::B::D::DKIPtr membervariable2;
            B::D::DKIPtr membervariable3;
            ::B::D::DKIPtr membervariable4;
            C::D::DKIPtr membervariable5;
        };
    }
}