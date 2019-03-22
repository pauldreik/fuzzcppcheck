class Fred {
    Fred(const Fred &);
private:
    bool m_b[2];
};
Fred::Fred(const Fred & rhs) {
    m_b[2] = rhs.m_b[2];
}