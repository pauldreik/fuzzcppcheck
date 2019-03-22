void foo(int flag1, int flag2, ...) {
    switch (flag1) {
    default:
        va_list vargs;
        va_start(vargs, flag2);
        if (flag2) {
            va_end(vargs);
            break;
        }
        int data = va_arg(vargs, int);
        va_end(vargs);
    }
}