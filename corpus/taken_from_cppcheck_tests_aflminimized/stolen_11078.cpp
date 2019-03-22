namespace NS1 {
namespace NS2 {
template<class T>
class Fred {
    T * t;
public:
    Fred<T>() : t(nullptr) {}
};
}
}
NS1::NS2::Fred<int> fred;