int f(long double ldbl, double dbl, float flt) {
    if (ldbl != ldbl) have_nan = 1;
    if (!(dbl == dbl)) have_nan = 1;
    if (flt != flt) have_nan = 1;
    return have_nan;
}