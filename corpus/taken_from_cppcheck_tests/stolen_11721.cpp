char *f()
{
    char **temp=malloc(8);
    *temp = malloc(2);
    strcpy(*temp,"");
    return (strncat(*temp,"a",1));
}