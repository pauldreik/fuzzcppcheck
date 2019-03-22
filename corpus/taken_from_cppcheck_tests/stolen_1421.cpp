class Fred : public Base<A, B> {public:    Fred()
    :Base<A, B>(1),
     x(1)
    {}
private:
    int x;
};
