template <typename T>
T f() {
  T x = T();
}
int &a = f<int&>();
