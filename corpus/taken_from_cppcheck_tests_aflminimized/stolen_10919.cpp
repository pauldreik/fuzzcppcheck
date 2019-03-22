enum class Color { Red = 0, Green = 1, };
int fun(const Color color) {
    auto a = 0;
    for (auto i = static_cast<int>(color); i < 10; i++) {
        a += i;
    }
    return a;
}