template <class T>
struct Unconst {
    typedef T type;
};
template <class T>
struct Unconst<const T> {
    typedef T type;
};
template <class T>
struct Unconst<const T&> {
    typedef T& type;
};
template <class T>
struct Unconst<T* const> {
    typedef T* type;
};
template <class T1, class T2>
struct type_equal {
    enum {  value = 0   };
};
template <class T>
struct type_equal<T, T> {
    enum {  value = 1   };
};
template<class T>
struct template_is_const
{
    enum {value = !type_equal<T, typename Unconst<T>::type>::value  };
};