void f(C1* x, std::list<int> a) {
  std::list<int>::iterator pos = a.begin();
  for(pos = x[0]->plist.begin(); pos != x[0]->plist.end(); ++pos) {}
}