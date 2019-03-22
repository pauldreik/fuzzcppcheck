int foo() {
  iterator it1 = ints.begin();
  iterator it2 = it1;
  for (++it2;it2!=ints.end();++it2);
}
