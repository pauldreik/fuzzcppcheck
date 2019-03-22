double foo() {
    sk *t1 = foo();
    sk *t2 = foo();
    if ((!t1) && (!t2))
        return 0.0;
    if (t1 && (!t2))
        return t1->Inter();
    if (t2->GetT() == t)
        return t2->Inter();
    if (t2 && (!t1))
        return 0.0;
    return 0;
}