template <class T> struct Test {
  Test() : fData(0) {}
  Test (const Test<T>& aOther) : fData(aOther.fData) {}
  Test (Test<T>&& aOther) : fData(std::move(aOther.fData)) {}
  T fData;
};
int main() {
  Test <int> test;
  return 0;
}