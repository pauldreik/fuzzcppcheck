class Fred {
    typedef int* (Fred::*F);
    operator F() const { }
};