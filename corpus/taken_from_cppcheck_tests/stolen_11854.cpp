class Fred {
    typedef int* (Fred::*F);
    operator F() const;
};
Fred::operator F() const { }