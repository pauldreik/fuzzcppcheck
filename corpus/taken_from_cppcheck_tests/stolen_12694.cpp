typedef void (func_type)();
struct A {
    friend func_type f : 2;
};