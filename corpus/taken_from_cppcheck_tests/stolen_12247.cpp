void f(const std::vector<int>& m_ImplementationMap) {
    std::vector<int>::iterator aIt = m_ImplementationMap.find( xEle );
    m_ImplementationMap.erase(*aIt);
    m_ImplementationMap.erase(aIt);
}