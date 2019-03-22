int f(int signed, unsigned char value) {
    int ret;
    if (signed)
        ret = (signed char)value;
    else
        ret = (unsigned char)value;
    return ret;
}