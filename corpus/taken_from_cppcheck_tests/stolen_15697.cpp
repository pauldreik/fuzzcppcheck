void foo(double recoveredX) {
  for (double x = 1e-18; x < 1e40; x *= 1.9) {
    double relativeError = (x - recoveredX) / x;
  }
}
