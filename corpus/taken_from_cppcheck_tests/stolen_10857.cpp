template<typename T>
void f(T && t) {
    g(std::forward<T>(t));
    T s = t;
}