template<
    typename U,
    typename std::enable_if<
        std::is_convertible<U, T>{}>::type* = nullptr>
void foo(U x);
