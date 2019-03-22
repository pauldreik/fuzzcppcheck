template<class T>
struct A
{
    static B f(const B &);
    static A f(const A &);
    static A &g();
    static T &h();

    enum {
        X = sizeof(f(g() >> h())) == sizeof(A),
        Y = sizeof(f(g() << h())) == sizeof(A),
        Z = X & Y
    };
};
