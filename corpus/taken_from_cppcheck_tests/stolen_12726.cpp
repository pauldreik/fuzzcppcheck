typedef _Atomic(int(A::*)) atomic_mem_ptr_to_int;
typedef _Atomic(int)&atomic_int_ref;
struct S {
  _Atomic union { int n; };
};