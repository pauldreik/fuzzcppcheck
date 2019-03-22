struct Fred {
    int array[10];
    typedef int* (Fred::*UnspecifiedBoolType);
    operator UnspecifiedBoolType() { array[0] = 0; };
};