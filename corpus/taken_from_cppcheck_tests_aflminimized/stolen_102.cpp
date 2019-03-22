struct FN {int i;};
struct FP {FN* f};
void foo(int*& p, FN* p_fp) {
    FN fn;
    FP fp;
    p = &fn.i;
    p = &p_fp->i;
    p = &fp.f->i;
}