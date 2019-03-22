void foo(int a) {
    char str[10];
    switch (a)
    {
    case 2:
      strncpy(str, "a'");
    case 3:
      strncpy(str, "b'");
    }
}