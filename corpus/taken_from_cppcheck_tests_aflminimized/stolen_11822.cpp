typedef char (* type1)[10];
typedef char (& type2)[10];
typedef char (& type3)[x];
typedef char (& type4)[x + 2];
type1 t1;
type1 (*tp1)[2];
type2 t2;
type3 t3;
type4 t4;