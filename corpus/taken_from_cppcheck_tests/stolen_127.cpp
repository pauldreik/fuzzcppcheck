class FileManager {
  FileManager() : UniqueRealDirs(*new UniqueDirContainer())
  {}
  ~FileManager() {
    delete &UniqueRealDirs;
   }
};
