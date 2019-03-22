namespace NS1 {
namespace NS2 {
    template <typename T>
    struct Fred {
        Fred();
        Fred(const Fred &);
        Fred & operator = (const Fred &);
        ~Fred();
    };
    template <typename T>
    Fred<T>::Fred() { }
    template <typename T>
    Fred<T>::Fred(const Fred<T> & f) { }
    template <typename T>
    Fred<T> & Fred<T>::operator = (const Fred<T> & f) { }
    template <typename T>
    Fred<T>::~Fred() { }
}
}
NS1::NS2::Fred<int> fred;