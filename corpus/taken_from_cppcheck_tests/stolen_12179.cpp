std::vector<int>& f();
std::vector<int>& g();
void foo() {
    auto it = f().end();
    f().begin() - it
    f().begin()+1 - it
    f().begin() - (it + 1)
    f().begin() - f().end()
    f().begin()+1 - f().end()
    f().begin() - (f().end() + 1)
    (void)std::find(f().begin(), it, 0);
    (void)std::find(f().begin(), it + 1, 0);
    (void)std::find(f().begin() + 1, it + 1, 0);
    (void)std::find(f().begin() + 1, it, 0);
    (void)std::find(f().begin(), f().end(), 0);
    (void)std::find(f().begin() + 1, f().end(), 0);
    (void)std::find(f().begin(), f().end() - 1, 0);
    (void)std::find(f().begin() + 1, f().end() - 1, 0);
    (void)std::find(begin(f()), end(f()));
    (void)std::find(begin(f()) + 1, end(f()), 0);
    (void)std::find(begin(f()), end(f()) - 1, 0);
    (void)std::find(begin(f()) + 1, end(f()) - 1, 0);
}
