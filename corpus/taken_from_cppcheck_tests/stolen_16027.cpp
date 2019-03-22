static void func(int ec) {
    func2([](int x, const std::error_code& ec) { return x + ec; });
}