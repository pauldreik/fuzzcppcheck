class Fred {
    int a;
    int &getR() { return a; }
    int *getP() { return &a; }};