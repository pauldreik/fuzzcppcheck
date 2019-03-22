void foo() {
    size_t s;
    ptrdiff_t p;
    __int32 i32;
    unsigned __int32 u32;
    __int64 i64;
    unsigned __int64 u64;
    scanf("%Id %Iu %Ix", &s, &s, &s);
    scanf("%Id %Iu %Ix", &p, &p, &p);
    scanf("%I32d %I32u %I32x", &i32, &i32, &i32);
    scanf("%I32d %I32u %I32x", &u32, &u32, &u32);
    scanf("%I64d %I64u %I64x", &i64, &i64, &i64);
    scanf("%I64d %I64u %I64x", &u64, &u64, &u64);
}