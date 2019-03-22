class Fred {
    int i;
public:
    Fred() : i(5) { }
    ~Fred() { }
    Fred(const Fred &fred) : i(fred.i) { }
    Fred & operator=(const Fred &rhs) {
        Fred(rhs).swap(*this);
        return *this;
    }
};