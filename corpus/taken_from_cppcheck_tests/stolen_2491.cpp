class FileStream {
    void insert(const ByteVector &data, ulong start);
    FileStreamPrivate *d;
};
void FileStream::insert(const ByteVector &data, ulong start) {
    int bytesRead = fread(aboutToOverwrite.data(), 1, bufferLength, d->file);
    unknown(writePosition);
    fwrite(buffer.data(), sizeof(char), buffer.size(), d->file);
}