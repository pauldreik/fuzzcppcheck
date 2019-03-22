void foo(FILE* f, bool read) {
    if(read)
        fread(buffer, 5, 6, f);
    else
        fwrite(buffer, 5, 6, f);
}