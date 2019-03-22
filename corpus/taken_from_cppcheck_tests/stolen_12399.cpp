struct InternalMapInfo {
    std::string author;
};
const char* GetMapAuthor(int index) {
    const InternalMapInfo* mapInfo = &internal_getMapInfo;
    return mapInfo->author.c_str();
}