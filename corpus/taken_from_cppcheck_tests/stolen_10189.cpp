void foo(int a) {
    char str[10];
    int z = 0;
    switch (a)
    {
    case 2:
      strcpy(str, "a'");
      z++;
    case 3:
      strcpy(str, "b'");
      z++;
    }
}