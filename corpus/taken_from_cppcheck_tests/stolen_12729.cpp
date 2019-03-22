class Fred {
public:
    struct Wilma { };
    struct Barney {
        bool operator == (const struct Barney & b) const { return true; }
        bool operator == (const struct Wilma & w) const { return true; }
    };
    Fred(const struct Barney & b) { barney = b; }
private:
    struct Barney barney;
};
