int main() {
    int ppos = 1;
    int pneg = 0;
    const char*edge = ppos? " +" : pneg ? " -" : "";
    printf("This should be a '+' -> %s
", edge);
    return 0;
}