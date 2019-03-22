struct B {};
typedef struct A : public B {
    void f();
} a, *aPtr;