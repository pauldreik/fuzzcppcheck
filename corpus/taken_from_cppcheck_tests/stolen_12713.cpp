class Fred {
    class Foo { };
    void func() const;
};
Fred::func() const {
    Foo foo;
}