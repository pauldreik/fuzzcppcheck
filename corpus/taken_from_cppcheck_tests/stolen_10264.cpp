static std::function< int ( int, int ) > GetFunctor() {
    return [](int a_, int b_) -> int {
        int sum = a_ + b_;
        return sum;
    };
}