template <typename A>
void TestArithmetic() {
  x(1 * CheckedNumeric<A>());
}
void foo() {
  TestArithmetic<int>();
}