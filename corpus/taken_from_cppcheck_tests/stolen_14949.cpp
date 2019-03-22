int func() {
    std::mutex m;
    std::unique_lock<std::mutex> l{ m };
    return 0;
}