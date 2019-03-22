static void func() {
    auto x = []() mutable {};
    dostuff(x);
}