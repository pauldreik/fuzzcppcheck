struct A { 
  template <class T> operator T*();
}; 

template <> A::operator char*(){ return 0; } // specialization

int main() { 
  A a;
  int *ip = a.operator int*();
}

namespace PR5742 {
  template <class T> struct A { };
  struct S {
    template <class T> operator T();
  } s;
  void f() {
    s.operator A<A<int> >();
  }
}
