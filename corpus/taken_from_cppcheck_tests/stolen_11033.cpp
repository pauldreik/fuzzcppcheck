namespace NS1 {
    namespace NS2 {
        namespace NS3 {
            namespace NS4 {
                template<class T>
                class Fred {
                    T * t;
                public:
                    Fred<T>() : t(nullptr) {}
                };
            }
            using namespace NS4;
            Fred<bool> fred_bool;
            NS4::Fred<char> fred_char;
        }
        using namespace NS3;
        NS4::Fred<short> fred_short;
        using namespace NS3::NS4;
        Fred<int> fred_int;
        NS3::NS4::Fred<long> fred_long;
        NS2::NS3::NS4::Fred<float> fred_float;
        NS1::NS2::NS3::NS4::Fred<double> fred_double;
    }
    using namespace NS2;
    NS3::NS4::Fred<float> fred_float1;
    NS2::NS3::NS4::Fred<double> fred_double1;
}
using namespace NS1::NS2::NS3::NS4;
Fred<bool> fred_bool1;
NS1::NS2::NS3::NS4::Fred<int> fred_int1;