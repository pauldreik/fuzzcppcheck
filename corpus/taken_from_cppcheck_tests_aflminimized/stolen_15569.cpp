void f(int i) {
    bool x = false;
    while(i > 0) {
        i++;
        if (i == 0) { x = true; }
        else if (x && i == 1) {}
    }
}
