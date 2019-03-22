void f(const std::list<int>& m_ImplementationMap) {
    std::list<int>::iterator aIt = m_ImplementationMap.find( xEle );
    m_ImplementationMap.erase(*aIt);
    m_ImplementationMap.erase(aIt);
}