void f() {
    HashSet_Ref::iterator aIt = m_ImplementationMap.find( xEle );
    m_SetLoadedFactories.erase(*aIt);
    m_SetLoadedFactories.erase(aIt);
}