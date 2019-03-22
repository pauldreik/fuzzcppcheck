class Fred {
public:
    Wilma *wilma;
    void a();
    void b();
};

void Fred::a() {
    if ( wilma ) { }
}

void Fred::b() {
    wilma->Reload();
}