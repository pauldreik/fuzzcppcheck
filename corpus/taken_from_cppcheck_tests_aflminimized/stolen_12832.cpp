class Fred {
    enum E1 { e1 };
    enum class E2 : unsigned short { e2 };
    bool               get(bool x) { return x; }
    char               get(char x) { return x; }
    short              get(short x) { return x; }
    int                get(int x) { return x; }
    long               get(long x) { return x; }
    long long          get(long long x) { return x; }
    unsigned char      get(unsigned char x) { return x; }
    signed char        get(signed char x) { return x; }
    unsigned short     get(unsigned short x) { return x; }
    unsigned int       get(unsigned int x) { return x; }
    unsigned long      get(unsigned long x) { return x; }
    unsigned long long get(unsigned long long x) { return x; }
    E1                 get(E1 x) { return x; }
    E2                 get(E2 x) { return x; }
    void foo() {
        bool               v1  = true;   v1  = get(get(v1));
        char               v2  = '1';    v2  = get(get(v2));
        short              v3  = 1;      v3  = get(get(v3));
        int                v4  = 1;      v4  = get(get(v4));
        long               v5  = 1;      v5  = get(get(v5));
        long long          v6  = 1;      v6  = get(get(v6));
        unsigned char      v7  = '1';    v7  = get(get(v7));
        signed char        v8  = '1';    v8  = get(get(v8));
        unsigned short     v9  = 1;      v9  = get(get(v9));
        unsigned int       v10 = 1;      v10 = get(get(v10));
        unsigned long      v11 = 1;      v11 = get(get(v11));
        unsigned long long v12 = 1;      v12 = get(get(v12));
        E1                 v13 = e1;     v13 = get(get(v13));
        E2                 v14 = E2::e2; v14 = get(get(v14));
    }
};