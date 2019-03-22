class Base {};
class Derived: public Base {};
void testCC() {
  std::vector<Base*> v;
  v.push_back((Base*)new Derived);
}