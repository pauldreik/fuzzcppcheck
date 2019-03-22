void foo() {
    scanf("%1d");
    scanf("%1u%1u", bar());
    sscanf(bar, "%1d%1d", &foo);
    scanf("%*1x %1x %29s", &count);
}