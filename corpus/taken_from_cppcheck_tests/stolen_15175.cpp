void f() {
  std::map<int,int> ints;
  ints[0]= 1;
  for each(std::pair<int,int> i in ints) { x += i.first; }
}