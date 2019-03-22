static void func(int ec) {
    func2([](const std::error_code& ec) { return ec; });
}