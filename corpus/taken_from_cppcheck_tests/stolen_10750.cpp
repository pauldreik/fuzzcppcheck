void f (FILE * pFile){
signed char c;
do {
  c = fgetc (pFile);
} while (EOF != c)}