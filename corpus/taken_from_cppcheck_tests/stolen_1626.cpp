struct Structure {
    int C;
};

class A {
    Structure B;
public:
    A() { Init( B ); };
    void Init( Structure& S ) { S.C = 0; };
};