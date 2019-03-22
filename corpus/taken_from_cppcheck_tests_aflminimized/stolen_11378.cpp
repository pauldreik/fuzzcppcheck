void foo()
{
FILE *f;
if( (f = fopen("foo", "r")) == ((FILE*)NULL) )
return(-1);
fclose(f);
}
