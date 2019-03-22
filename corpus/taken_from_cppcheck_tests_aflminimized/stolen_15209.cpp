int foo() {
    auto f = []{return 1};
    auto g = []{return 1};
    return f() + g();
}