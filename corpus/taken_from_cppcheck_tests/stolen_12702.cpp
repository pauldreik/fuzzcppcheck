template<template<class> class E,class D> class C : E<D>
{
public:
    int f();
};
class E : C<D,int>
{
public:
    int f() { return C< ::D,int>::f(); }
};