void NotUsed(double* pdD, int n) {
    double sum = 0.0;
    for (int i = 0; i<n; ++i)
        pdD[i] = (sum += pdD[i]);
}