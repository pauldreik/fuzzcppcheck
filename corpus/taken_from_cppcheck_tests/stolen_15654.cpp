class C {
public:
  C(const int &i);
};
int f() {
  int x=1;
  C c(x);
  return x;
}