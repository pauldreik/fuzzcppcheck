class Class {
public:
    typedef Template<double> Type;
    typedef Template2<Type> Type2;
    void set_member(Type2 m) { _m = m; }
private:
    Type2 _m;
};