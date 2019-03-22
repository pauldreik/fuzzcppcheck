void foo() {
    const size_t BUFLENGTH(2048);
    typedef char bufT[BUFLENGTH];
    bufT line= {0};
    bufT projectId= {0};
    const int scanrc=sscanf(line, "Project(\"{%36s}\")", projectId);
    sscanf(input, "%5s", output);
}