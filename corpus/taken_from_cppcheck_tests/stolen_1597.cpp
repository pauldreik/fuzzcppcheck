class Fred {
    struct Foo {
        int a;
        bool b;
    };
    Foo f;
    float g;
public:
    Fred() : f{0, true} { }
    float get() const;
};
float Fred::get() const { return g; }