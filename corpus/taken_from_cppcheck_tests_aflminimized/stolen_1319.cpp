class Bar {
public:
    explicit Bar(const Bar &bar) : Bar{bar.s} {}
    explicit Bar(const char s) : s{s} {}
private:
    char s;
};