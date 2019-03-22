void f (FILE * pFile){
unsigned char c;
do {
  c = getc (pFile);
} while (EOF != c)}