void f() {
  assert(std::all_of(first, last, []() {
                  auto tmp = x.someValue();
                  auto const expected = someOtherValue;
                  return tmp == expected;
                }));
}
