static FILE *fp = NULL;

void close()
{
  fclose(fp);
}

void dump()
{
  if (fp == NULL) return;
  fprintf(fp, "Here's the output.\n");
}

int main()
{
  fp = fopen("test.txt", "w");
  dump();
  close();
  return 0;
}