void f() {
    std::lock_guard<MyClass> lock(mutex_);
}