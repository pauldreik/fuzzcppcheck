void foo(FILE*& f) {
    if(!ferror(f)) {
        fclose(f);
        return;    }
    fwrite(buffer, 5, 6, f);
}