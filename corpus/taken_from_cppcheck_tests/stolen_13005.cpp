double zdcalc(long& length, const XYZ * per);
int zdcalc(const XYZ & per, short rs = 0);
long mycalc( ) {
    long length;
    XYZ per;
    zdcalc(length, &per);
}