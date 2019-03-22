int *test(int *Z)
{
    int *Q=NULL;
    if (Z) {
        Q = Z;
    }
    else {
        try {
        } catch(...) {
        }
    }
    *Q=1;
    return Q;
}