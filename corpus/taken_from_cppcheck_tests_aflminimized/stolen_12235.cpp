void f(std::list<int> data) {
  std::list<int>::const_iterator it = data.begin();
  it = data.erase(it);
  it = data.erase(it);
}