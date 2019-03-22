template<typename T>
struct C
{
  template<typename U, typename std::enable_if<(!std::is_fundamental<U>::value)>::type* = nullptr>
  void foo();
};
extern template void C<int>::foo<int, nullptr>();
template<typename T>
template<typename U, typename std::enable_if<(!std::is_fundamental<U>::value)>::type>
void C<T>::foo() {}