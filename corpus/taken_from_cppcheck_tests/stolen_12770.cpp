template <typename A> class Fred { struct impl; };
template <typename A> struct Fred<A>::impl {
    impl() { }
    ~impl() { }
    impl(const impl &) { }
    void foo(const impl &, const impl &) const { }
};
