void podMemPtrs() {
    int POD::*memptr;
    memptr = &POD::a;
    memptr = &POD::b;
    if (memptr)
        memptr = 0;
}