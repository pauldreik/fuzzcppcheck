void f () {
    ST * x =  g_pST;
    if (x->y == 0) {
        x = NULL;
        goto label;
    }
    a = x->y;
label:
}