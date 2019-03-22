void f()
{
    char psz_title[10];
    {
        char *psz_title = 0;
        abc(0, psz_title);
        free(psz_title);
    }
}