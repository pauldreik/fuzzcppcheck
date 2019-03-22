typedef int array [ice_or<is_int<int>::value, is_int<UDT>::value>::value ? 1 : -1];
typedef int array1 [N];
typedef int array2 [N][M];
typedef int int_t, int_array[N];
array a;
array1 a1;
array2 a2;
int_t t;
int_array ia;