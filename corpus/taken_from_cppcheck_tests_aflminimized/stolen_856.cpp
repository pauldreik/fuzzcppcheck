struct A {
    A& operator=(A const& a) { return operator=(&a); }
    A& operator=(const A*) { return *this; }
};