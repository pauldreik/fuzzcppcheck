void f() {
    std::mutex m;
    std::unique_lock<std::mutex> lock(m);
}