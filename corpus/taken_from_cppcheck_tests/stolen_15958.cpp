template<class C> class cacheEntry {
protected:
    int m_key;
public:
    cacheEntry();
};

template<class C> cacheEntry<C>::cacheEntry() : m_key() {}