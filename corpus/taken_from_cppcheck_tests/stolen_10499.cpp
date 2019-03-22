void f(bool c) {
    const bool b = a;
    if(c) { a = false; } 
    if(b && !a) { }
}
