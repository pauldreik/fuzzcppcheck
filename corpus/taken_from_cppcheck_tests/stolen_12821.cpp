struct S {
    void f()   { }
    void f() & { }
    void f() &&{ }
    void f() const   { }
    void f() const & { }
    void f() const &&{ }
    void g()   ;
    void g() & ;
    void g() &&;
    void g() const   ;
    void g() const & ;
    void g() const &&;
};
void S::g()   { }
void S::g() & { }
void S::g() &&{ }
void S::g() const   { }
void S::g() const & { }
void S::g() const &&{ }
