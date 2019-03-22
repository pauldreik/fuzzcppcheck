void f() {
  bool first = true;

  auto do_something = [&first]() {
    if (first) {
      first = false;
    } else {
      dostuff();
    }
  };
  do_something();
  do_something();
}