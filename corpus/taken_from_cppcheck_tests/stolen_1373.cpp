template <class T> struct Test {
  Test(int) : fData(0) {}
  T fData;
};
int main() {
  Test <int> test;
  return 0;
}