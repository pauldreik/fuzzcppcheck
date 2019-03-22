class Ccpucycles {
    friend class foo::bar;
    Ccpucycles() :
    m_v(0), m_b(true)
    {}
private:
    cpucyclesT m_v;
    bool m_b;
};