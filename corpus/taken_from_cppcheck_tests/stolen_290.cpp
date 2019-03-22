struct a {
  void operator()(b c) override {
    d(c, [=] { c->e });
  }
};
