struct Holder {
  Holder(FILE* f) : file(f) {}
  ~Holder() { fclose(file); }
  FILE* file;
};
void foo() {
  Holder h ( fopen("file.txt", "r"));
}
