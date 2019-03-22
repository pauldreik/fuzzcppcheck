void f() {
    enum { FourInEnumOne = 4 };
    enum { FourInEnumTwo = 4 };
    static_assert(FourInEnumOne == FourInEnumTwo, );
}