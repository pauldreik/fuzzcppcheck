void f2(bool *a) {
    const bool b = *a;
    if( *a == !(b) ) {}
    if( b == !(*a) ) {}
}
