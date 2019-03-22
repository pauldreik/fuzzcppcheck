const Item& foo(const Container& items) const {
    return bar(items.begin(), items.end(),
    [](const Item& lhs, const Item& rhs) {
        return false;
    });
}