int *test(int *Z)
{
    int *Q=NULL;
    if (Z) {
        Q = Z;
    }
    else {
        Z = new int;
        try {
        } catch(...) {
        }
        Q = Z;
    }
    *Q=1;
    return Q;
}