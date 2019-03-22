void foo() {
    char input[10];
    char output[5];
    sscanf(input, "%3s", output);
    sscanf(input, "%4s", output);
    sscanf(input, "%5s", output);
}