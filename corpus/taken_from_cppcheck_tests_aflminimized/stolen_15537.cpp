void f() {
    char *x = getenv ("LC_ALL");
    if (x == NULL)
        x = "";

    if ( (x[0] == 'U') &&
         (x[1] ?
          x[3] :
          x[2] ))
    {}
}
