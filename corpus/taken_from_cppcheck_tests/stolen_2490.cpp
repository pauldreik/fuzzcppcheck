class FileStream {
    void insert(const ByteVector &data, ulong start);
    void seek(long offset, Position p);
    FileStreamPrivate *d;
};
void FileStream::insert(const ByteVector &data, ulong start) {
    int bytesRead = fread(aboutToOverwrite.data(), 1, bufferLength, d->file);
    seek(writePosition);
    fwrite(buffer.data(), sizeof(char), buffer.size(), d->file);
}