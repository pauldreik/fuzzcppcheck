template<typename ...Args>
int f0(Args ...args) {
  return ^ {
    return sizeof...(Args);
  }() + ^ {
    return sizeof...(args);
  }();
}