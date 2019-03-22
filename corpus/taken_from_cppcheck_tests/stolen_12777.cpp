namespace NS {
    template <typename A> class Fred { struct impl; };
}
template <typename A> struct NS::Fred<A>::impl {
    impl();
    ~impl();
    impl(const impl &);
    void foo(const impl &, const impl &) const;
};
namespace NS {
    template <typename A> Fred<A>::impl::impl() { }
    template <typename A> Fred<A>::impl::~impl() { }
    template <typename A> Fred<A>::impl::impl(const Fred<A>::impl &) { }
    template <typename A> void Fred<A>::impl::foo(const Fred<A>::impl &, const Fred<A>::impl &) const { }
}