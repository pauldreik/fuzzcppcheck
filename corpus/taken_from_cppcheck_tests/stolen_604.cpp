int f(int i) {
    int p[2] = {0, 0};
    if(i >= 2)
        return 0;
    else if(i == 0)
        return 0;
    return p[i - 1];
}
void g(int i) {
    if( i == 0 )
        return f(i);
}