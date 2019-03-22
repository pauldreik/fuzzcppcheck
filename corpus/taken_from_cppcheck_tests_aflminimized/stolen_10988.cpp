template <typename... T> struct A
{
    A(T* p) {
        (A<T...>*)(p);
    }
};
A<int> a(0);