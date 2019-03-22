void f(const std::list<int>& m_ImplementationMap) {
    std::list<int>::iterator aIt = m_ImplementationMap.find( xEle1 );
    std::list<int>::iterator bIt = m_ImplementationMap.find( xEle2 );
    m_ImplementationMap.erase(*bIt);
    m_ImplementationMap.erase(aIt);
}