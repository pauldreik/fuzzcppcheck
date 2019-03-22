class DHTTokenTracker {
  static const size_t SECRET_SIZE = 4;
  unsigned char secret_[2][SECRET_SIZE];
  void validateToken();
};
template <typename T> struct DerefEqual<T> derefEqual(const T& t) {
  return DerefEqual<T>(t);
}
template <typename T>
struct RefLess {
  bool operator()(const std::shared_ptr<T>& lhs,
                  const std::shared_ptr<T>& rhs)
  {
    return lhs.get() < rhs.get();
  }
};
void DHTTokenTracker::validateToken()
{
  for (auto& elem : secret_) {
  }
}