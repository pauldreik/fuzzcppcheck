namespace NS {
    class Fred { struct impl; };
}
struct NS::Fred::impl {
    impl();
    ~impl();
    impl(const impl &);
    void foo(const impl &, const impl &) const;
};
using namespace NS;
Fred::impl::impl() { }
Fred::impl::~impl() { }
Fred::impl::impl(const Fred::impl &) { }
void Fred::impl::foo(const Fred::impl &, const Fred::impl &) const { }