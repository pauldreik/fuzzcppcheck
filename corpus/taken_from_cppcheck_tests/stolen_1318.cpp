class B {
    std::shared_ptr<A> _d;
    B(const B& other) : _d(std::make_shared<A>()) {
        *_d = *other._d;
    }
};