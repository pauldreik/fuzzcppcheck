template<class T, class U> class DefaultMemory {}; template<class Key, class Val, class Mem=DefaultMemory<Key,Val> > class thv_table_c  {}; thv_table_c<void *,void *> id_table_m;