template<unsigned int n>
  constexpr long fib = fib<n-1> + fib<n-2>;
template<>
  constexpr long fib<0> = 0;
template<>
  constexpr long fib<1> = 1;
long f0 = fib<0>;
long f1 = fib<1>;
long f2 = fib<2>;
long f3 = fib<3>;