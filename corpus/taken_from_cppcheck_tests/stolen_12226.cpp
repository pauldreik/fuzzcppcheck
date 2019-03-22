void f(std::map<uint32, uint32> my_map) {
  std::map<uint32, uint32>::iterator itr = my_map.begin();
  switch (itr->first) {
  case 0:
    my_map.erase(itr);
    continue;
  case 1:
    itr->second = 1;
    break;
  }
}