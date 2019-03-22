void f(int x) {
    const PoolItem* pItem;
    while (x > 0) {
        if (GetItem(&pItem) && (*pItem != rPool))
        { }
        x--;
    }
}