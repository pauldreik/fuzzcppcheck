class CDataImpl {
public:
    CDataImpl() { m_refcount = 1; }
    void Release() { if (--m_refcount == 0) delete this; }
private:
    int m_refcount;
};

class CData {
public:
    CData() : m_impl(new CDataImpl()) { }
    ~CData() { if (m_impl) m_impl->Release(); }
private:
    CDataImpl *m_impl;
};