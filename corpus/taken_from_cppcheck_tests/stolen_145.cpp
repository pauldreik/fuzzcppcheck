int main() {
   int *p = malloc(4);
   free(&p);
   return 0;
}