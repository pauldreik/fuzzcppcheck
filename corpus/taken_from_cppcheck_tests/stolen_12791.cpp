template <typename T>
class optional {
  auto     value() & -> T &;
  auto     value() && -> T &&;
  auto     value() const& -> T const &;
};
template <typename T>
auto optional<T>::value() & -> T & {}
template <typename T>
auto optional<T>::value() && -> T && {}
template <typename T>
auto optional<T>::value() const & -> T const & {}
optional<int> i;