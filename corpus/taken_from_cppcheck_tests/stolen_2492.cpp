class FileStream {
    void insert(const ByteVector &data, ulong start);
    FileStreamPrivate *d;
};
void known(int);
void FileStream::insert(const ByteVector &data, ulong start) {
    int bytesRead = fread(aboutToOverwrite.data(), 1, bufferLength, d->file);
    known(writePosition);
    fwrite(buffer.data(), sizeof(char), buffer.size(), d->file);
}