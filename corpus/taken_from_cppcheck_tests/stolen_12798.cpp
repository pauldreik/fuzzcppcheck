struct Fred {
    enum Enum { E0, E1 };
};
struct Barney : public Fred {
    Enum func(Enum e) { return e; }
};