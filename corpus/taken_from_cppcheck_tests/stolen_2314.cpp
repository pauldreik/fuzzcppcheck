template<template<typename...> class T, typename... Args>
struct foo<T<Args...> > {
    const bool value = true;
};

template<int I>
struct int_
{};

int main() {
  foo<int_<0> >::value;
}
