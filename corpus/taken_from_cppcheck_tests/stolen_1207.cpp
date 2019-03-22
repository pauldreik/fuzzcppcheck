struct Fred {
    int a;
    bool operator<(const Fred &f) { return a < f.a; }
};