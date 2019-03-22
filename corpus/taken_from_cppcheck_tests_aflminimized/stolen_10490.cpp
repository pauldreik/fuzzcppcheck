void f1(bool a) {
    const bool b = a;
    if( a == !(b) ) {}
    if( b == !(a) ) {}
}
