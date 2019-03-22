void foo() { 
    const bool x = a.f(A::B);
    const bool y = a.f(A::C);
    if (!x && !y) return;
}
