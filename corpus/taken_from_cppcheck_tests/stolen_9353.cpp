void foo() {
    const char * const format1 = "%15s%17s%17s%17s%17s";
    const char format2[] = "%15s%17s%17s%17s%17s";
    const char * const format3 = format1;
    int i = 0;
    sprintf_s(lineBuffer, format1, "type", "sum", "avg", "min", i, 0);
    sprintf_s(lineBuffer, format2, "type", "sum", "avg", "min", i, 0);
    sprintf_s(lineBuffer, format3, "type", "sum", "avg", "min", i, 0);
    sprintf(lineBuffer, format1, "type", "sum", "avg", "min", i, 0);
    sprintf(lineBuffer, format2, "type", "sum", "avg", "min", i, 0);
    sprintf(lineBuffer, format3, "type", "sum", "avg", "min", i, 0);
    printf(format1, "type", "sum", "avg", "min", i, 0);
    printf(format2, "type", "sum", "avg", "min", i, 0);
    printf(format3, "type", "sum", "avg", "min", i, 0);
    sprintf_s(lineBuffer, 100, format1, "type", "sum", "avg", "min", i, 0);
    sprintf_s(lineBuffer, 100, format2, "type", "sum", "avg", "min", i, 0);
    sprintf_s(lineBuffer, 100, format3, "type", "sum", "avg", "min", i, 0);
}
