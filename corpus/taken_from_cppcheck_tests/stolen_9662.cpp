struct Holder {
  Holder(int i, FILE* f) : file(f) {}
  ~Holder() { fclose(file); }
  FILE* file;
};
void foo() {
  Holder { 0, fopen("file.txt", "r")};
}
