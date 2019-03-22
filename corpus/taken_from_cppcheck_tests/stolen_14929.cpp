void f() {
    Abc* abc = getabc();
    while (0 != (abc = abc->next())) {
        ++nOldNum;
    }
}