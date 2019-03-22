void f() {
    pLocker = std::shared_ptr<jfxLocker>(new jfxLocker(m_lock, true));
}