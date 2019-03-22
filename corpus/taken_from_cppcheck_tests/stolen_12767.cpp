namespace NS {
    class Fred { struct impl; };
}
struct NS::Fred::impl {
    impl();
    ~impl();
    impl(const impl &);
    void foo(const impl &, const impl &) const;
};
NS::Fred::impl::impl() { }
NS::Fred::impl::~impl() { }
NS::Fred::impl::impl(const NS::Fred::impl &) { }
void NS::Fred::impl::foo(const NS::Fred::impl &, const NS::Fred::impl &) const { }