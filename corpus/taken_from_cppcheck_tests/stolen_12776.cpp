namespace NS {
    template <typename A> class Fred { struct impl; };
}
template <typename A> struct NS::Fred<A>::impl {
    impl();
    ~impl();
    impl(const impl &);
    void foo(const impl &, const impl &) const;
};
template <typename A> NS::Fred<A>::impl::impl() { }
template <typename A> NS::Fred<A>::impl::~impl() { }
template <typename A> NS::Fred<A>::impl::impl(const NS::Fred<A>::impl &) { }
template <typename A> void NS::Fred<A>::impl::foo(const NS::Fred<A>::impl &, const NS::Fred<A>::impl &) const { }
