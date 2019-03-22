float buffer[64];
main (void)
{
  char *cptr;
  cptr = (char *)buffer;
  cptr += (-(long int) buffer & (16 * sizeof (float) - 1));
}
