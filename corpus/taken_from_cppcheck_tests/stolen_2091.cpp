extern "C" int printf(const char* fmt, ...);
class A {
public:
  int Var;
  A(int arg) { Var = arg; }
  ~A() { printf("A d'tor\n"); }
};
 const A& foo(const A& arg) { return arg; }
 foo(A(12)).Var
