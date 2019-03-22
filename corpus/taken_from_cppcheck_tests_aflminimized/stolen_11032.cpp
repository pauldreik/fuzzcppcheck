template<unsigned int n>
  constexpr long fib = fib<n-1> + fib<n-2>;
template<>
  constexpr long fib<0> = 0;
template<>
  constexpr long fib<1> = 1;
long f5 = fib<5>;
