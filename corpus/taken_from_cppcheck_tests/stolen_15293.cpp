void f(int i) {
    X x;
    y = g(std::move(x), 
          x.size());
}