class iterator {
public:
    CCommitPointer m_ptr;
    iterator() {}
    CCommitPointer& operator*() {
        return m_ptr;
    }
    CCommitPointer* operator->() {
        return &m_ptr;
    }
    iterator& operator++() {
        ++m_ptr.m_place;
        return *this;
    }
    }; 
    iterator begin() {
    iterator it; 
    it->m_place = 0;
    return it; 
}
