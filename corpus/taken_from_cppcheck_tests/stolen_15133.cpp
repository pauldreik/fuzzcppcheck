void foo()
{
    int a = 10;
    union { struct { unsigned char x; }; unsigned char z; };
    do {
        func();
    } while(a--);
}