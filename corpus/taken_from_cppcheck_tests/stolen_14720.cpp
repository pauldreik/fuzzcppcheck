class X {
public:
    void bar() { foo<int>(0); }
private:
    template<typename T> void foo( T t ) const;
};
template<typename T> void X::foo( T t ) const { }
