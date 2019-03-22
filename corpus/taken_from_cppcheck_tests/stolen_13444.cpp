int main() {
  char* data = new char[100];
  char** dataPtr = &data;
  printf("test");
  delete [] *dataPtr;
}