void f(bool b, int i) {
    int j = i;
    i++;
    if (b) {
        x = i;
    } else {
        x = j;
    }
}
