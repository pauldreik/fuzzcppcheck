static FILE *fp = NULL;

void close()
{
  fclose(fp);
}

void dump()
{
  fclose(fp);
  fprintf(fp, "Here's the output.\n");
}