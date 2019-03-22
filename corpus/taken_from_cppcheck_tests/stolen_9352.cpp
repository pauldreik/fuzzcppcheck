void foo() {
    char lineBuffer [600];
    const char * const format = "%15s%17s%17s%17s%17s";
    sprintf_s(lineBuffer, 600, format, "type", "sum", "avg", "min", "max");
    sprintf_s(lineBuffer, format, "type", "sum", "avg", "min", "max");
}
