template <class T> void self_assign(T& t) noexcept(noexcept(t = t)) {t = t; }
