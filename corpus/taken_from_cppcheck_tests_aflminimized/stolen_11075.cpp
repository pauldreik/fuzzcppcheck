namespace N1 {
namespace N2 {
    struct C { };
    template <class T> struct CT { };
    C c1;
    CT<int> ct1;
}
N2::C c2;
N2::CT<int> ct2;
}
N1::N2::C c3;
N1::N2::CT<int> ct3;