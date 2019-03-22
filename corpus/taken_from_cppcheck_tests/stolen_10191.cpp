void foo(int a) {
    char str[10];
    switch (a)
    {
    case 2:
      strcpy(str, "a'");
      printf(str);
    case 3:
      strcpy(str, "b'");
    }
}