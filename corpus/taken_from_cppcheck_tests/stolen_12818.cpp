struct Fred {
    void Sync(dsmp_t& type, int& len, int limit = 123);
    void Sync(int& syncpos, dsmp_t& type, int& len, int limit = 123);
    void FindSyncPoint();
};
void Fred::FindSyncPoint() {
    dsmp_t type;
    int syncpos, len;
    Sync(syncpos, type, len);
    Sync(type, len);
}