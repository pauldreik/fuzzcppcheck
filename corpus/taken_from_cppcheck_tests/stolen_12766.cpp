namespace NS {
    class Fred { struct impl; };
}
struct NS::Fred::impl {
    impl() { }
    ~impl() { }
    impl(const impl &) { }
    void foo(const impl &, const impl &) const { }
};