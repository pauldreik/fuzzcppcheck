class CMyClass {
    std::function< void(void) > m_callback;
public:
    CMyClass() {
        m_callback = [this]() { return VirtualMethod(); };
    }
    virtual void VirtualMethod() = 0;
};