void foo() {
    size_t s;
    int i;
    scanf("%I", &s);
    scanf("%I6", &s);
    scanf("%I6x", &s);
    scanf("%I16", &s);
    scanf("%I16x", &s);
    scanf("%I32", &s);
    scanf("%I64", &s);
    scanf("%I%i", &s, &i);
    scanf("%I6%i", &s, &i);
    scanf("%I6x%i", &s, &i);
    scanf("%I16%i", &s, &i);
    scanf("%I16x%i", &s, &i);
    scanf("%I32%i", &s, &i);
    scanf("%I64%i", &s, &i);
}