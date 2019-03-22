void f() {
    enum { FourInEnumOne = 4 };
    enum { FourInEnumTwo = 4 };
    if (FourInEnumOne == FourInEnumTwo) {}
}