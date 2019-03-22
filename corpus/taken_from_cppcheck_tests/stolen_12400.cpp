struct InternalMapInfo {
    std::string author;
};
std::string GetMapAuthor(int index) {
    const InternalMapInfo* mapInfo = &internal_getMapInfo;
    return mapInfo->author.c_str();
}