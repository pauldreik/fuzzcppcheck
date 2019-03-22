template<typename T> class A;
template<typename T> class B;

typedef A<int> x;
typedef B<int> y;

template<typename T> class A {
    void f() {
        B<T> a = B<T>::g();
        T b = 0;
        if (b)
            b = 0;
    }
};

template<typename T> inline B<T> h() { return B<T>(); }
