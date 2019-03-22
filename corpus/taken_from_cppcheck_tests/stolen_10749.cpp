void f (FILE * pFile){
char c;
do {
  c = fgetc (pFile);
} while (EOF != c)}