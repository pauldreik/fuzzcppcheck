void f(const std::vector<int>& m_ImplementationMap) {
    std::vector<int>::iterator aIt = m_ImplementationMap.find( xEle1 );
    std::vector<int>::iterator bIt = m_ImplementationMap.find( xEle2 );
    m_ImplementationMap.erase(*bIt);
    aIt = m_ImplementationMap.erase(aIt);
}