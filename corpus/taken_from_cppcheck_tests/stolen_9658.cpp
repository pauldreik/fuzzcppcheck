struct Holder {
  Holder(FILE* f) : file(f) {}
  ~Holder() { fclose(file); }
  FILE* file;
};
void foo() {
  Holder ( fopen("file.txt", "r"));
}
