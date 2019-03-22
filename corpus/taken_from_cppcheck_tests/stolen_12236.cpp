void f(Data data) {
  std::list<int>::const_iterator it = data.ints.begin();
  it = data.ints.erase(it);
  it = data.ints.erase(it);
}