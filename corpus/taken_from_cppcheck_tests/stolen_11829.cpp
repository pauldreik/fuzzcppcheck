struct C {
    typedef void (*fptr)();
    const fptr pr;
    operator const fptr& () { return pr; }
};