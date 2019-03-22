namespace N1 {
    class Fred {
    public:
        static void f1(char *p) { *p = 0; }
    };
    void fa(void) { char *p; Fred::f1(p); }
    void fb(void) { char *p; Fred::f2(p); }
    void fc(void) { char *p; ::N1::Fred::f1(p); }
    void fd(void) { char *p; ::N1::Fred::f2(p); }
}
namespace N2 {
    static void f1(char *p) { *p = 0; }
    void fa(void) { char *p; f1(p); }
    void fb(void) { char *p; f2(p); }
    void fc(void) { char *p; N1::Fred::f1(p); }
    void fd(void) { char *p; N1::Fred::f2(p); }
    void fe(void) { char *p; ::N1::Fred::f1(p); }
    void ff(void) { char *p; ::N1::Fred::f2(p); }
    void fg(void) { char *p; Foo::f1(p); }
    void fh(void) { char *p; Foo::f2(p); }
}