void foo(FILE*& f) {
    fclose(f);
    fwrite(buffer, 5, 6, f);
    clearerr(f);
    fread(buffer, 5, 6, f);
    ungetc('a', f);
    ungetwc(L'a', f);
    rewind(f);
}