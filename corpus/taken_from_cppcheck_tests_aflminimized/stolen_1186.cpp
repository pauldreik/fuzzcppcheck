class C {
public:
    inline void operator += (const int &x ) { re += x; }
    friend inline void exp(C & c, const C & x) { }
protected:
    int   re;
    int   im;
};