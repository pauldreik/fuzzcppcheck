int zdcalc(const XYZ & per, short rs = 0);
double zdcalc(long& length, const XYZ * per);
long mycalc( ) {
    long length;
    XYZ per;
    zdcalc(length, &per);
}