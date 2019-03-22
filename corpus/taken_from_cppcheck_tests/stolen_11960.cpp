enum Format_E1 { FORMAT11, FORMAT12 } Format_T1;
namespace MySpace {
   enum Format_E2 { FORMAT21, FORMAT22 } Format_T2;
}
typedef Format_E1 (**PtrToFunPtr_Type1)();
typedef MySpace::Format_E2 (**PtrToFunPtr_Type2)();
PtrToFunPtr_Type1 t1;
PtrToFunPtr_Type2 t2;